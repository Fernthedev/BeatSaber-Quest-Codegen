#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SerializationEntry)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
struct SerializationEntry;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::SerializationEntry);
// Type: System.Runtime.Serialization::SerializationEntry
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3198))
// CS Name: ::System.Runtime.Serialization::SerializationEntry
struct CORDL_TYPE SerializationEntry : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _name offset 0x0
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _value offset 0x8
 __declspec(property(get=__get__value, put=__set__value)) ::System::Object*  _value;

/// @brief Field _type offset 0x10
 __declspec(property(get=__get__type, put=__set__type)) ::System::Type*  _type;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

 __declspec(property(get=get_Name)) ::StringW  Name;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__value(::System::Object*  value) ;

constexpr ::System::Object* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__value() const;

constexpr void __set__type(::System::Type*  value) ;

constexpr ::System::Type* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type() const;

/// @brief Method .ctor addr 0x24b4500 size 0xc virtual false final false
inline void _ctor(::StringW  entryName, ::System::Object*  entryValue, ::System::Type*  entryType) ;

/// @brief Method get_Value addr 0x24b450c size 0x8 virtual false final false
inline ::System::Object* get_Value() ;

/// @brief Method get_Name addr 0x24b4514 size 0x8 virtual false final false
inline ::StringW get_Name() ;

// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value", ty: "::System::Object*", modifiers: "", def_value: None }, CppParam { name: "_type", ty: "::System::Type*", modifiers: "", def_value: None }]
constexpr SerializationEntry(::StringW  _name, ::System::Object*  _value, ::System::Type*  _type) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SerializationEntry(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SerializationEntry()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEntry, 0x18>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
