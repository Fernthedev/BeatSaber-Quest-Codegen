#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Native)
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaWrap;
}
namespace UnityEngine::Yoga {
struct YogaAlign;
}
namespace UnityEngine::Yoga {
struct YogaEdge;
}
namespace UnityEngine::Yoga {
struct YogaPositionType;
}
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
struct YogaJustify;
}
namespace UnityEngine::Yoga {
struct YogaDisplay;
}
namespace UnityEngine::Yoga {
struct YogaOverflow;
}
namespace UnityEngine::Yoga {
struct YogaFlexDirection;
}
namespace UnityEngine::Yoga {
struct YogaDirection;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class Native;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Yoga::Native);
// Type: UnityEngine.Yoga::Native
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15358))
// CS Name: ::UnityEngine.Yoga::Native*
class CORDL_TYPE Native : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method YGNodeNewWithConfig addr 0x2ea2a64 size 0x3c virtual false final false
static inline ::cordl_internals::intptr_t YGNodeNewWithConfig(::cordl_internals::intptr_t  config) ;

/// @brief Method YGNodeFree addr 0x2ea2b38 size 0x8c virtual false final false
static inline void YGNodeFree(::cordl_internals::intptr_t  ygNode) ;

/// @brief Method YGNodeFreeInternal addr 0x2ea4ae0 size 0x3c virtual false final false
static inline void YGNodeFreeInternal(::cordl_internals::intptr_t  ygNode) ;

/// @brief Method YGSetManagedObject addr 0x2ea45c0 size 0x44 virtual false final false
static inline void YGSetManagedObject(::cordl_internals::intptr_t  ygNode, ::UnityEngine::Yoga::YogaNode*  node) ;

/// @brief Method YGNodeSetConfig addr 0x2ea2c74 size 0x44 virtual false final false
static inline void YGNodeSetConfig(::cordl_internals::intptr_t  ygNode, ::cordl_internals::intptr_t  config) ;

/// @brief Method YGConfigGetDefault addr 0x2ea4b1c size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t YGConfigGetDefault() ;

/// @brief Method YGConfigNew addr 0x2ea4b44 size 0x28 virtual false final false
static inline ::cordl_internals::intptr_t YGConfigNew() ;

/// @brief Method YGConfigFree addr 0x2ea4b6c size 0x8c virtual false final false
static inline void YGConfigFree(::cordl_internals::intptr_t  config) ;

/// @brief Method YGConfigFreeInternal addr 0x2ea4bf8 size 0x3c virtual false final false
static inline void YGConfigFreeInternal(::cordl_internals::intptr_t  config) ;

/// @brief Method YGConfigSetUseWebDefaults addr 0x2ea4c34 size 0x44 virtual false final false
static inline void YGConfigSetUseWebDefaults(::cordl_internals::intptr_t  config, bool  useWebDefaults) ;

/// @brief Method YGConfigGetUseWebDefaults addr 0x2ea4c78 size 0x3c virtual false final false
static inline bool YGConfigGetUseWebDefaults(::cordl_internals::intptr_t  config) ;

/// @brief Method YGConfigSetPointScaleFactor addr 0x2ea4cb4 size 0x4c virtual false final false
static inline void YGConfigSetPointScaleFactor(::cordl_internals::intptr_t  config, float_t  pixelsInPoint) ;

/// @brief Method YGNodeInsertChild addr 0x2ea4324 size 0x54 virtual false final false
static inline void YGNodeInsertChild(::cordl_internals::intptr_t  node, ::cordl_internals::intptr_t  child, uint32_t  index) ;

/// @brief Method YGNodeRemoveChild addr 0x2ea4440 size 0x44 virtual false final false
static inline void YGNodeRemoveChild(::cordl_internals::intptr_t  node, ::cordl_internals::intptr_t  child) ;

/// @brief Method YGNodeCalculateLayout addr 0x2ea473c size 0x5c virtual false final false
static inline void YGNodeCalculateLayout(::cordl_internals::intptr_t  node, float_t  availableWidth, float_t  availableHeight, ::UnityEngine::Yoga::YogaDirection  parentDirection) ;

/// @brief Method YGNodeMarkDirty addr 0x2ea2d6c size 0x3c virtual false final false
static inline void YGNodeMarkDirty(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeIsDirty addr 0x2ea2cf4 size 0x3c virtual false final false
static inline bool YGNodeIsDirty(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeCopyStyle addr 0x2ea2e8c size 0x44 virtual false final false
static inline void YGNodeCopyStyle(::cordl_internals::intptr_t  dstNode, ::cordl_internals::intptr_t  srcNode) ;

/// @brief Method YGNodeSetMeasureFunc addr 0x2ea4640 size 0x3c virtual false final false
static inline void YGNodeSetMeasureFunc(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeRemoveMeasureFunc addr 0x2ea4604 size 0x3c virtual false final false
static inline void YGNodeRemoveMeasureFunc(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeMeasureInvoke addr 0x2ea4d00 size 0x64 virtual false final false
static inline void YGNodeMeasureInvoke(::UnityEngine::Yoga::YogaNode*  node, float_t  width, ::UnityEngine::Yoga::YogaMeasureMode  widthMode, float_t  height, ::UnityEngine::Yoga::YogaMeasureMode  heightMode, ::cordl_internals::intptr_t  returnValueAddress) ;

/// @brief Method YGNodeBaselineInvoke addr 0x2ea4d64 size 0x4c virtual false final false
static inline void YGNodeBaselineInvoke(::UnityEngine::Yoga::YogaNode*  node, float_t  width, float_t  height, ::cordl_internals::intptr_t  returnValueAddress) ;

/// @brief Method YGNodeSetHasNewLayout addr 0x2ea41bc size 0x44 virtual false final false
static inline void YGNodeSetHasNewLayout(::cordl_internals::intptr_t  node, bool  hasNewLayout) ;

/// @brief Method YGNodeGetHasNewLayout addr 0x2ea2de4 size 0x3c virtual false final false
static inline bool YGNodeGetHasNewLayout(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeStyleGetDirection addr 0x2ea4700 size 0x3c virtual false final false
static inline ::UnityEngine::Yoga::YogaDirection YGNodeStyleGetDirection(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeStyleSetFlexDirection addr 0x2ea2f14 size 0x44 virtual false final false
static inline void YGNodeStyleSetFlexDirection(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaFlexDirection  flexDirection) ;

/// @brief Method YGNodeStyleSetJustifyContent addr 0x2ea2f9c size 0x44 virtual false final false
static inline void YGNodeStyleSetJustifyContent(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaJustify  justifyContent) ;

/// @brief Method YGNodeStyleSetAlignContent addr 0x2ea31bc size 0x44 virtual false final false
static inline void YGNodeStyleSetAlignContent(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaAlign  alignContent) ;

/// @brief Method YGNodeStyleSetAlignItems addr 0x2ea30ac size 0x44 virtual false final false
static inline void YGNodeStyleSetAlignItems(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaAlign  alignItems) ;

/// @brief Method YGNodeStyleSetAlignSelf addr 0x2ea3134 size 0x44 virtual false final false
static inline void YGNodeStyleSetAlignSelf(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaAlign  alignSelf) ;

/// @brief Method YGNodeStyleSetPositionType addr 0x2ea3244 size 0x44 virtual false final false
static inline void YGNodeStyleSetPositionType(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaPositionType  positionType) ;

/// @brief Method YGNodeStyleSetFlexWrap addr 0x2ea32cc size 0x44 virtual false final false
static inline void YGNodeStyleSetFlexWrap(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaWrap  flexWrap) ;

/// @brief Method YGNodeStyleSetOverflow addr 0x2ea40ec size 0x44 virtual false final false
static inline void YGNodeStyleSetOverflow(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaOverflow  flexWrap) ;

/// @brief Method YGNodeStyleSetDisplay addr 0x2ea3024 size 0x44 virtual false final false
static inline void YGNodeStyleSetDisplay(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaDisplay  display) ;

/// @brief Method YGNodeStyleSetFlex addr 0x2ea335c size 0x4c virtual false final false
static inline void YGNodeStyleSetFlex(::cordl_internals::intptr_t  node, float_t  flex) ;

/// @brief Method YGNodeStyleSetFlexGrow addr 0x2ea33f4 size 0x4c virtual false final false
static inline void YGNodeStyleSetFlexGrow(::cordl_internals::intptr_t  node, float_t  flexGrow) ;

/// @brief Method YGNodeStyleSetFlexShrink addr 0x2ea348c size 0x4c virtual false final false
static inline void YGNodeStyleSetFlexShrink(::cordl_internals::intptr_t  node, float_t  flexShrink) ;

/// @brief Method YGNodeStyleSetFlexBasis addr 0x2ea361c size 0x4c virtual false final false
static inline void YGNodeStyleSetFlexBasis(::cordl_internals::intptr_t  node, float_t  flexBasis) ;

/// @brief Method YGNodeStyleSetFlexBasisPercent addr 0x2ea3594 size 0x4c virtual false final false
static inline void YGNodeStyleSetFlexBasisPercent(::cordl_internals::intptr_t  node, float_t  flexBasis) ;

/// @brief Method YGNodeStyleSetFlexBasisAuto addr 0x2ea35e0 size 0x3c virtual false final false
static inline void YGNodeStyleSetFlexBasisAuto(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeStyleSetWidth addr 0x2ea37ac size 0x4c virtual false final false
static inline void YGNodeStyleSetWidth(::cordl_internals::intptr_t  node, float_t  width) ;

/// @brief Method YGNodeStyleSetWidthPercent addr 0x2ea3724 size 0x4c virtual false final false
static inline void YGNodeStyleSetWidthPercent(::cordl_internals::intptr_t  node, float_t  width) ;

/// @brief Method YGNodeStyleSetWidthAuto addr 0x2ea3770 size 0x3c virtual false final false
static inline void YGNodeStyleSetWidthAuto(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeStyleSetHeight addr 0x2ea393c size 0x4c virtual false final false
static inline void YGNodeStyleSetHeight(::cordl_internals::intptr_t  node, float_t  height) ;

/// @brief Method YGNodeStyleSetHeightPercent addr 0x2ea38b4 size 0x4c virtual false final false
static inline void YGNodeStyleSetHeightPercent(::cordl_internals::intptr_t  node, float_t  height) ;

/// @brief Method YGNodeStyleSetHeightAuto addr 0x2ea3900 size 0x3c virtual false final false
static inline void YGNodeStyleSetHeightAuto(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeStyleSetMinWidth addr 0x2ea3c78 size 0x4c virtual false final false
static inline void YGNodeStyleSetMinWidth(::cordl_internals::intptr_t  node, float_t  minWidth) ;

/// @brief Method YGNodeStyleSetMinWidthPercent addr 0x2ea3c2c size 0x4c virtual false final false
static inline void YGNodeStyleSetMinWidthPercent(::cordl_internals::intptr_t  node, float_t  minWidth) ;

/// @brief Method YGNodeStyleSetMinHeight addr 0x2ea3d8c size 0x4c virtual false final false
static inline void YGNodeStyleSetMinHeight(::cordl_internals::intptr_t  node, float_t  minHeight) ;

/// @brief Method YGNodeStyleSetMinHeightPercent addr 0x2ea3d40 size 0x4c virtual false final false
static inline void YGNodeStyleSetMinHeightPercent(::cordl_internals::intptr_t  node, float_t  minHeight) ;

/// @brief Method YGNodeStyleSetMaxWidth addr 0x2ea3a50 size 0x4c virtual false final false
static inline void YGNodeStyleSetMaxWidth(::cordl_internals::intptr_t  node, float_t  maxWidth) ;

/// @brief Method YGNodeStyleSetMaxWidthPercent addr 0x2ea3a04 size 0x4c virtual false final false
static inline void YGNodeStyleSetMaxWidthPercent(::cordl_internals::intptr_t  node, float_t  maxWidth) ;

/// @brief Method YGNodeStyleSetMaxHeight addr 0x2ea3b64 size 0x4c virtual false final false
static inline void YGNodeStyleSetMaxHeight(::cordl_internals::intptr_t  node, float_t  maxHeight) ;

/// @brief Method YGNodeStyleSetMaxHeightPercent addr 0x2ea3b18 size 0x4c virtual false final false
static inline void YGNodeStyleSetMaxHeightPercent(::cordl_internals::intptr_t  node, float_t  maxHeight) ;

/// @brief Method YGNodeStyleSetPosition addr 0x2ea2038 size 0x54 virtual false final false
static inline void YGNodeStyleSetPosition(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  position) ;

/// @brief Method YGNodeStyleSetPositionPercent addr 0x2ea1fe4 size 0x54 virtual false final false
static inline void YGNodeStyleSetPositionPercent(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  position) ;

/// @brief Method YGNodeStyleSetMargin addr 0x2ea221c size 0x54 virtual false final false
static inline void YGNodeStyleSetMargin(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  margin) ;

/// @brief Method YGNodeStyleSetMarginPercent addr 0x2ea2184 size 0x54 virtual false final false
static inline void YGNodeStyleSetMarginPercent(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  margin) ;

/// @brief Method YGNodeStyleSetMarginAuto addr 0x2ea21d8 size 0x44 virtual false final false
static inline void YGNodeStyleSetMarginAuto(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge) ;

/// @brief Method YGNodeStyleSetPadding addr 0x2ea2378 size 0x54 virtual false final false
static inline void YGNodeStyleSetPadding(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  padding) ;

/// @brief Method YGNodeStyleSetPaddingPercent addr 0x2ea2324 size 0x54 virtual false final false
static inline void YGNodeStyleSetPaddingPercent(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  padding) ;

/// @brief Method YGNodeStyleSetBorder addr 0x2ea241c size 0x54 virtual false final false
static inline void YGNodeStyleSetBorder(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge, float_t  border) ;

/// @brief Method YGNodeLayoutGetLeft addr 0x2ea3e14 size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetLeft(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetTop addr 0x2ea3e8c size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetTop(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetRight addr 0x2ea3f04 size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetRight(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetBottom addr 0x2ea3f7c size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetBottom(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetWidth addr 0x2ea3ff4 size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetWidth(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetHeight addr 0x2ea406c size 0x3c virtual false final false
static inline float_t YGNodeLayoutGetHeight(::cordl_internals::intptr_t  node) ;

/// @brief Method YGNodeLayoutGetMargin addr 0x2ea25a0 size 0x44 virtual false final false
static inline float_t YGNodeLayoutGetMargin(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge) ;

/// @brief Method YGNodeLayoutGetPadding addr 0x2ea26e4 size 0x44 virtual false final false
static inline float_t YGNodeLayoutGetPadding(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge) ;

/// @brief Method YGNodeLayoutGetBorder addr 0x2ea2828 size 0x44 virtual false final false
static inline float_t YGNodeLayoutGetBorder(::cordl_internals::intptr_t  node, ::UnityEngine::Yoga::YogaEdge  edge) ;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Native(Native && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Native", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Native(Native const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Native()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Yoga::Native, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(::UnityEngine::Yoga::Native);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::Native*, "UnityEngine.Yoga", "Native");
