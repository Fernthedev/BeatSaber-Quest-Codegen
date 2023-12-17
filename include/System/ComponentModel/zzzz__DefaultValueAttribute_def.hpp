#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultValueAttribute)
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DefaultValueAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DefaultValueAttribute);
// Type: System.ComponentModel::DefaultValueAttribute
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9383))
// CS Name: ::System.ComponentModel::DefaultValueAttribute*
class CORDL_TYPE DefaultValueAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field _value offset 0x10
 __declspec(property(get=__get__value, put=__set__value)) ::System::Object*  _value;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

constexpr void __set__value(::System::Object*  value) ;

constexpr ::System::Object* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__value() const;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(bool  value) ;

/// @brief Method .ctor addr 0x290373c size 0x6c virtual false final false
inline void _ctor(bool  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::StringW  value) ;

/// @brief Method .ctor addr 0x29037a8 size 0x28 virtual false final false
inline void _ctor(::StringW  value) ;

static inline ::System::ComponentModel::DefaultValueAttribute* New_ctor(::System::Object*  value) ;

/// @brief Method .ctor addr 0x29037d0 size 0x28 virtual false final false
inline void _ctor(::System::Object*  value) ;

/// @brief Method get_Value addr 0x29037f8 size 0x8 virtual true final false
inline ::System::Object* get_Value() ;

/// @brief Method Equals addr 0x2903800 size 0x10c virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetHashCode addr 0x290390c size 0x8 virtual true final false
inline int32_t GetHashCode() ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultValueAttribute(DefaultValueAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultValueAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultValueAttribute(DefaultValueAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultValueAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DefaultValueAttribute, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DefaultValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DefaultValueAttribute*, "System.ComponentModel", "DefaultValueAttribute");
