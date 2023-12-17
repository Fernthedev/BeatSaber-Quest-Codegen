#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NotKeyableAttribute)
// Forward declare root types
namespace UnityEngine::Timeline {
class NotKeyableAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::NotKeyableAttribute);
// Type: UnityEngine.Timeline::NotKeyableAttribute
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13916))
// CS Name: ::UnityEngine.Timeline::NotKeyableAttribute*
class CORDL_TYPE NotKeyableAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::UnityEngine::Timeline::NotKeyableAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2c6e6c0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NotKeyableAttribute(NotKeyableAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NotKeyableAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NotKeyableAttribute(NotKeyableAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NotKeyableAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::NotKeyableAttribute, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::NotKeyableAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::NotKeyableAttribute*, "UnityEngine.Timeline", "NotKeyableAttribute");
