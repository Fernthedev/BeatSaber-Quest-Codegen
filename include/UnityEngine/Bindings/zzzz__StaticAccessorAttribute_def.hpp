#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StaticAccessorAttribute)
namespace UnityEngine::Bindings {
struct StaticAccessorType;
}
// Forward declare root types
namespace UnityEngine::Bindings {
class StaticAccessorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::StaticAccessorAttribute);
// Type: UnityEngine.Bindings::StaticAccessorAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16028))
// CS Name: ::UnityEngine.Bindings::StaticAccessorAttribute*
class CORDL_TYPE StaticAccessorAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Attribute)]{};

/// @brief Field <Name>k__BackingField offset 0x10
 __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Type>k__BackingField offset 0x18
 __declspec(property(get=__get__Type_k__BackingField, put=__set__Type_k__BackingField)) ::UnityEngine::Bindings::StaticAccessorType  _Type_k__BackingField;

 __declspec(property(put=set_Name)) ::StringW  Name;

 __declspec(property(put=set_Type)) ::UnityEngine::Bindings::StaticAccessorType  Type;

constexpr void __set__Name_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Name_k__BackingField() ;

constexpr ::StringW const& __get__Name_k__BackingField() const;

constexpr void __set__Type_k__BackingField(::UnityEngine::Bindings::StaticAccessorType  value) ;

constexpr ::UnityEngine::Bindings::StaticAccessorType& __get__Type_k__BackingField() ;

constexpr ::UnityEngine::Bindings::StaticAccessorType const& __get__Type_k__BackingField() const;

/// @brief Method set_Name addr 0x2d1893c size 0x8 virtual false final false
inline void set_Name(::StringW  value) ;

/// @brief Method set_Type addr 0x2d18944 size 0x8 virtual false final false
inline void set_Type(::UnityEngine::Bindings::StaticAccessorType  value) ;

static inline ::UnityEngine::Bindings::StaticAccessorAttribute* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2d1894c size 0x28 virtual false final false
inline void _ctor(::StringW  name) ;

static inline ::UnityEngine::Bindings::StaticAccessorAttribute* New_ctor(::StringW  name, ::UnityEngine::Bindings::StaticAccessorType  type) ;

/// @brief Method .ctor addr 0x2d18974 size 0x30 virtual false final false
inline void _ctor(::StringW  name, ::UnityEngine::Bindings::StaticAccessorType  type) ;

// Ctor Parameters [CppParam { name: "", ty: "StaticAccessorAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticAccessorAttribute(StaticAccessorAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticAccessorAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticAccessorAttribute(StaticAccessorAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 StaticAccessorAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::StaticAccessorAttribute, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::StaticAccessorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::StaticAccessorAttribute*, "UnityEngine.Bindings", "StaticAccessorAttribute");
