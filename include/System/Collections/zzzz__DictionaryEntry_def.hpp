#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DictionaryEntry)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
struct DictionaryEntry;
}
// Write type traits
MARK_VAL_T(::System::Collections::DictionaryEntry);
// Type: System.Collections::DictionaryEntry
namespace System::Collections {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3753))
// CS Name: ::System.Collections::DictionaryEntry
struct CORDL_TYPE DictionaryEntry : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _key offset 0x0
 __declspec(property(get=__get__key, put=__set__key)) ::System::Object*  _key;

/// @brief Field _value offset 0x8
 __declspec(property(get=__get__value, put=__set__value)) ::System::Object*  _value;

 __declspec(property(get=get_Key)) ::System::Object*  Key;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

constexpr void __set__key(::System::Object*  value) ;

constexpr ::System::Object* __get__key() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__key() const;

constexpr void __set__value(::System::Object*  value) ;

constexpr ::System::Object* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__value() const;

/// @brief Method .ctor addr 0x257c4b0 size 0x8 virtual false final false
inline void _ctor(::System::Object*  key, ::System::Object*  value) ;

/// @brief Method get_Key addr 0x257c4b8 size 0x8 virtual false final false
inline ::System::Object* get_Key() ;

/// @brief Method get_Value addr 0x257c4c0 size 0x8 virtual false final false
inline ::System::Object* get_Value() ;

// Ctor Parameters [CppParam { name: "_key", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr DictionaryEntry(::System::Object*  _key, ::System::Object*  _value) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DictionaryEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DictionaryEntry()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::DictionaryEntry, 0x10>, "Size mismatch!");

} // namespace end def System::Collections
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::DictionaryEntry, "System.Collections", "DictionaryEntry");
