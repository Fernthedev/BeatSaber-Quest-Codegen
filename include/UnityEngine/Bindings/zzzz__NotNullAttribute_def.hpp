#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NotNullAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NotNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NotNullAttribute);
// Type: UnityEngine.Bindings::NotNullAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16023))
// CS Name: ::UnityEngine.Bindings::NotNullAttribute*
class CORDL_TYPE NotNullAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field <Exception>k__BackingField offset 0x10
 __declspec(property(get=__get__Exception_k__BackingField, put=__set__Exception_k__BackingField)) ::StringW  _Exception_k__BackingField;

 __declspec(property(put=set_Exception)) ::StringW  Exception;

constexpr void __set__Exception_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Exception_k__BackingField() ;

constexpr ::StringW const& __get__Exception_k__BackingField() const;

/// @brief Method set_Exception addr 0x2d18878 size 0x8 virtual false final false
inline void set_Exception(::StringW  value) ;

static inline ::UnityEngine::Bindings::NotNullAttribute* New_ctor(::StringW  exception) ;

/// @brief Method .ctor addr 0x2d18880 size 0x28 virtual false final false
inline void _ctor(::StringW  exception) ;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotNullAttribute(NotNullAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotNullAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotNullAttribute(NotNullAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotNullAttribute()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NotNullAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NotNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NotNullAttribute*, "UnityEngine.Bindings", "NotNullAttribute");
