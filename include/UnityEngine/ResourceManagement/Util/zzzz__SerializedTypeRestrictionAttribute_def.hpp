#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializedTypeRestrictionAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class SerializedTypeRestrictionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
// Type: UnityEngine.ResourceManagement.Util::SerializedTypeRestrictionAttribute
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13980))
// CS Name: ::UnityEngine.ResourceManagement.Util::SerializedTypeRestrictionAttribute*
class CORDL_TYPE SerializedTypeRestrictionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Attribute)]{};

/// @brief Field type offset 0x10
 __declspec(property(get=__get_type, put=__set_type)) ::System::Type*  type;

constexpr void __set_type(::System::Type*  value) ;

constexpr ::System::Type* __get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_type() const;

static inline ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2bd2450 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializedTypeRestrictionAttribute()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*, "UnityEngine.ResourceManagement.Util", "SerializedTypeRestrictionAttribute");
