#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIRUtility)
namespace UnityEngine {
class Object;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UIRUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIRUtility);
// Type: UnityEngine.UIElements::UIRUtility
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7328))
// CS Name: ::UnityEngine.UIElements::UIRUtility*
class CORDL_TYPE UIRUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_k_DefaultShaderName(::StringW  value) ;

static inline ::StringW getStaticF_k_DefaultShaderName() ;

static inline void setStaticF_k_DefaultWorldSpaceShaderName(::StringW  value) ;

static inline ::StringW getStaticF_k_DefaultWorldSpaceShaderName() ;

/// @brief Method ShapeWindingIsClockwise addr 0x2e784f8 size 0x8c virtual false final false
static inline bool ShapeWindingIsClockwise(int32_t  maskDepth, int32_t  stencilRef) ;

/// @brief Method IsRoundRect addr 0x2e78584 size 0x204 virtual false final false
static inline bool IsRoundRect(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method IsVectorImageBackground addr 0x2e78788 size 0x90 virtual false final false
static inline bool IsVectorImageBackground(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method IsElementSelfHidden addr 0x2e78818 size 0xc0 virtual false final false
static inline bool IsElementSelfHidden(::UnityEngine::UIElements::VisualElement*  ve) ;

/// @brief Method Destroy addr 0x2e788d8 size 0xa8 virtual false final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method GetPrevPow2 addr 0x2e78980 size 0x34 virtual false final false
static inline int32_t GetPrevPow2(int32_t  n) ;

/// @brief Method GetNextPow2 addr 0x2e789b4 size 0x1c virtual false final false
static inline int32_t GetNextPow2(int32_t  n) ;

/// @brief Method GetNextPow2Exp addr 0x2e789d0 size 0x30 virtual false final false
static inline int32_t GetNextPow2Exp(int32_t  n) ;

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIRUtility(UIRUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIRUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIRUtility(UIRUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIRUtility()  = default;
public:


// Fields

// Static field k_DefaultShaderName

// Static field k_DefaultWorldSpaceShaderName


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIRUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UIRUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIRUtility*, "UnityEngine.UIElements", "UIRUtility");
