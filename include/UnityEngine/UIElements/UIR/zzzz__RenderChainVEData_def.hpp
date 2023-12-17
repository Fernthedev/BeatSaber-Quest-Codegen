#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChainVEData)
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChainTextEntry;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct ClipMethod;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements::UIR {
template<typename T>
class BasicNode_1;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct RenderChainVEData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChainVEData);
// Type: UnityEngine.UIElements.UIR::RenderChainVEData
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7396))
// CS Name: ::UnityEngine.UIElements.UIR::RenderChainVEData
struct CORDL_TYPE RenderChainVEData : public ::bs_hook::ValueTypeWrapper<0x158> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x158};

/// @brief Field prev offset 0x0
 __declspec(property(get=__get_prev, put=__set_prev)) ::UnityEngine::UIElements::VisualElement*  prev;

/// @brief Field next offset 0x8
 __declspec(property(get=__get_next, put=__set_next)) ::UnityEngine::UIElements::VisualElement*  next;

/// @brief Field groupTransformAncestor offset 0x10
 __declspec(property(get=__get_groupTransformAncestor, put=__set_groupTransformAncestor)) ::UnityEngine::UIElements::VisualElement*  groupTransformAncestor;

/// @brief Field boneTransformAncestor offset 0x18
 __declspec(property(get=__get_boneTransformAncestor, put=__set_boneTransformAncestor)) ::UnityEngine::UIElements::VisualElement*  boneTransformAncestor;

/// @brief Field prevDirty offset 0x20
 __declspec(property(get=__get_prevDirty, put=__set_prevDirty)) ::UnityEngine::UIElements::VisualElement*  prevDirty;

/// @brief Field nextDirty offset 0x28
 __declspec(property(get=__get_nextDirty, put=__set_nextDirty)) ::UnityEngine::UIElements::VisualElement*  nextDirty;

/// @brief Field hierarchyDepth offset 0x30
 __declspec(property(get=__get_hierarchyDepth, put=__set_hierarchyDepth)) int32_t  hierarchyDepth;

/// @brief Field dirtiedValues offset 0x34
 __declspec(property(get=__get_dirtiedValues, put=__set_dirtiedValues)) ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  dirtiedValues;

/// @brief Field dirtyID offset 0x38
 __declspec(property(get=__get_dirtyID, put=__set_dirtyID)) uint32_t  dirtyID;

/// @brief Field firstCommand offset 0x40
 __declspec(property(get=__get_firstCommand, put=__set_firstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  firstCommand;

/// @brief Field lastCommand offset 0x48
 __declspec(property(get=__get_lastCommand, put=__set_lastCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastCommand;

/// @brief Field firstClosingCommand offset 0x50
 __declspec(property(get=__get_firstClosingCommand, put=__set_firstClosingCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  firstClosingCommand;

/// @brief Field lastClosingCommand offset 0x58
 __declspec(property(get=__get_lastClosingCommand, put=__set_lastClosingCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastClosingCommand;

/// @brief Field isInChain offset 0x60
 __declspec(property(get=__get_isInChain, put=__set_isInChain)) bool  isInChain;

/// @brief Field isHierarchyHidden offset 0x61
 __declspec(property(get=__get_isHierarchyHidden, put=__set_isHierarchyHidden)) bool  isHierarchyHidden;

/// @brief Field localFlipsWinding offset 0x62
 __declspec(property(get=__get_localFlipsWinding, put=__set_localFlipsWinding)) bool  localFlipsWinding;

/// @brief Field localTransformScaleZero offset 0x63
 __declspec(property(get=__get_localTransformScaleZero, put=__set_localTransformScaleZero)) bool  localTransformScaleZero;

/// @brief Field worldFlipsWinding offset 0x64
 __declspec(property(get=__get_worldFlipsWinding, put=__set_worldFlipsWinding)) bool  worldFlipsWinding;

/// @brief Field clipMethod offset 0x68
 __declspec(property(get=__get_clipMethod, put=__set_clipMethod)) ::UnityEngine::UIElements::UIR::Implementation::ClipMethod  clipMethod;

/// @brief Field childrenStencilRef offset 0x6c
 __declspec(property(get=__get_childrenStencilRef, put=__set_childrenStencilRef)) int32_t  childrenStencilRef;

/// @brief Field childrenMaskDepth offset 0x70
 __declspec(property(get=__get_childrenMaskDepth, put=__set_childrenMaskDepth)) int32_t  childrenMaskDepth;

/// @brief Field disableNudging offset 0x74
 __declspec(property(get=__get_disableNudging, put=__set_disableNudging)) bool  disableNudging;

/// @brief Field usesLegacyText offset 0x75
 __declspec(property(get=__get_usesLegacyText, put=__set_usesLegacyText)) bool  usesLegacyText;

/// @brief Field data offset 0x78
 __declspec(property(get=__get_data, put=__set_data)) ::UnityEngine::UIElements::UIR::MeshHandle*  data;

/// @brief Field closingData offset 0x80
 __declspec(property(get=__get_closingData, put=__set_closingData)) ::UnityEngine::UIElements::UIR::MeshHandle*  closingData;

/// @brief Field verticesSpace offset 0x88
 __declspec(property(get=__get_verticesSpace, put=__set_verticesSpace)) ::UnityEngine::Matrix4x4  verticesSpace;

/// @brief Field displacementUVStart offset 0xc8
 __declspec(property(get=__get_displacementUVStart, put=__set_displacementUVStart)) int32_t  displacementUVStart;

/// @brief Field displacementUVEnd offset 0xcc
 __declspec(property(get=__get_displacementUVEnd, put=__set_displacementUVEnd)) int32_t  displacementUVEnd;

/// @brief Field transformID offset 0xd0
 __declspec(property(get=__get_transformID, put=__set_transformID)) ::UnityEngine::UIElements::UIR::BMPAlloc  transformID;

/// @brief Field clipRectID offset 0xd8
 __declspec(property(get=__get_clipRectID, put=__set_clipRectID)) ::UnityEngine::UIElements::UIR::BMPAlloc  clipRectID;

/// @brief Field opacityID offset 0xe0
 __declspec(property(get=__get_opacityID, put=__set_opacityID)) ::UnityEngine::UIElements::UIR::BMPAlloc  opacityID;

/// @brief Field textCoreSettingsID offset 0xe8
 __declspec(property(get=__get_textCoreSettingsID, put=__set_textCoreSettingsID)) ::UnityEngine::UIElements::UIR::BMPAlloc  textCoreSettingsID;

/// @brief Field backgroundColorID offset 0xf0
 __declspec(property(get=__get_backgroundColorID, put=__set_backgroundColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  backgroundColorID;

/// @brief Field borderLeftColorID offset 0xf8
 __declspec(property(get=__get_borderLeftColorID, put=__set_borderLeftColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  borderLeftColorID;

/// @brief Field borderTopColorID offset 0x100
 __declspec(property(get=__get_borderTopColorID, put=__set_borderTopColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  borderTopColorID;

/// @brief Field borderRightColorID offset 0x108
 __declspec(property(get=__get_borderRightColorID, put=__set_borderRightColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  borderRightColorID;

/// @brief Field borderBottomColorID offset 0x110
 __declspec(property(get=__get_borderBottomColorID, put=__set_borderBottomColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  borderBottomColorID;

/// @brief Field tintColorID offset 0x118
 __declspec(property(get=__get_tintColorID, put=__set_tintColorID)) ::UnityEngine::UIElements::UIR::BMPAlloc  tintColorID;

/// @brief Field compositeOpacity offset 0x120
 __declspec(property(get=__get_compositeOpacity, put=__set_compositeOpacity)) float_t  compositeOpacity;

/// @brief Field backgroundColor offset 0x124
 __declspec(property(get=__get_backgroundColor, put=__set_backgroundColor)) ::UnityEngine::Color  backgroundColor;

/// @brief Field prevText offset 0x138
 __declspec(property(get=__get_prevText, put=__set_prevText)) ::UnityEngine::UIElements::VisualElement*  prevText;

/// @brief Field nextText offset 0x140
 __declspec(property(get=__get_nextText, put=__set_nextText)) ::UnityEngine::UIElements::VisualElement*  nextText;

/// @brief Field textEntries offset 0x148
 __declspec(property(get=__get_textEntries, put=__set_textEntries)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*  textEntries;

/// @brief Field textures offset 0x150
 __declspec(property(get=__get_textures, put=__set_textures)) ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*  textures;

 __declspec(property(get=get_lastClosingOrLastCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastClosingOrLastCommand;

constexpr void __set_prev(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_prev() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_prev() const;

constexpr void __set_next(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_next() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_next() const;

constexpr void __set_groupTransformAncestor(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_groupTransformAncestor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_groupTransformAncestor() const;

constexpr void __set_boneTransformAncestor(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_boneTransformAncestor() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_boneTransformAncestor() const;

constexpr void __set_prevDirty(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_prevDirty() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_prevDirty() const;

constexpr void __set_nextDirty(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_nextDirty() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_nextDirty() const;

constexpr void __set_hierarchyDepth(int32_t  value) ;

constexpr int32_t& __get_hierarchyDepth() ;

constexpr int32_t const& __get_hierarchyDepth() const;

constexpr void __set_dirtiedValues(::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes& __get_dirtiedValues() ;

constexpr ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes const& __get_dirtiedValues() const;

constexpr void __set_dirtyID(uint32_t  value) ;

constexpr uint32_t& __get_dirtyID() ;

constexpr uint32_t const& __get_dirtyID() const;

constexpr void __set_firstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* __get_firstCommand() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> __get_firstCommand() const;

constexpr void __set_lastCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* __get_lastCommand() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> __get_lastCommand() const;

constexpr void __set_firstClosingCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* __get_firstClosingCommand() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> __get_firstClosingCommand() const;

constexpr void __set_lastClosingCommand(::UnityEngine::UIElements::UIR::RenderChainCommand*  value) ;

constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* __get_lastClosingCommand() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::RenderChainCommand*> __get_lastClosingCommand() const;

constexpr void __set_isInChain(bool  value) ;

constexpr bool& __get_isInChain() ;

constexpr bool const& __get_isInChain() const;

constexpr void __set_isHierarchyHidden(bool  value) ;

constexpr bool& __get_isHierarchyHidden() ;

constexpr bool const& __get_isHierarchyHidden() const;

constexpr void __set_localFlipsWinding(bool  value) ;

constexpr bool& __get_localFlipsWinding() ;

constexpr bool const& __get_localFlipsWinding() const;

constexpr void __set_localTransformScaleZero(bool  value) ;

constexpr bool& __get_localTransformScaleZero() ;

constexpr bool const& __get_localTransformScaleZero() const;

constexpr void __set_worldFlipsWinding(bool  value) ;

constexpr bool& __get_worldFlipsWinding() ;

constexpr bool const& __get_worldFlipsWinding() const;

constexpr void __set_clipMethod(::UnityEngine::UIElements::UIR::Implementation::ClipMethod  value) ;

constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod& __get_clipMethod() ;

constexpr ::UnityEngine::UIElements::UIR::Implementation::ClipMethod const& __get_clipMethod() const;

constexpr void __set_childrenStencilRef(int32_t  value) ;

constexpr int32_t& __get_childrenStencilRef() ;

constexpr int32_t const& __get_childrenStencilRef() const;

constexpr void __set_childrenMaskDepth(int32_t  value) ;

constexpr int32_t& __get_childrenMaskDepth() ;

constexpr int32_t const& __get_childrenMaskDepth() const;

constexpr void __set_disableNudging(bool  value) ;

constexpr bool& __get_disableNudging() ;

constexpr bool const& __get_disableNudging() const;

constexpr void __set_usesLegacyText(bool  value) ;

constexpr bool& __get_usesLegacyText() ;

constexpr bool const& __get_usesLegacyText() const;

constexpr void __set_data(::UnityEngine::UIElements::UIR::MeshHandle*  value) ;

constexpr ::UnityEngine::UIElements::UIR::MeshHandle* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> __get_data() const;

constexpr void __set_closingData(::UnityEngine::UIElements::UIR::MeshHandle*  value) ;

constexpr ::UnityEngine::UIElements::UIR::MeshHandle* __get_closingData() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::MeshHandle*> __get_closingData() const;

constexpr void __set_verticesSpace(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_verticesSpace() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_verticesSpace() const;

constexpr void __set_displacementUVStart(int32_t  value) ;

constexpr int32_t& __get_displacementUVStart() ;

constexpr int32_t const& __get_displacementUVStart() const;

constexpr void __set_displacementUVEnd(int32_t  value) ;

constexpr int32_t& __get_displacementUVEnd() ;

constexpr int32_t const& __get_displacementUVEnd() const;

constexpr void __set_transformID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_transformID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_transformID() const;

constexpr void __set_clipRectID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_clipRectID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_clipRectID() const;

constexpr void __set_opacityID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_opacityID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_opacityID() const;

constexpr void __set_textCoreSettingsID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_textCoreSettingsID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_textCoreSettingsID() const;

constexpr void __set_backgroundColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_backgroundColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_backgroundColorID() const;

constexpr void __set_borderLeftColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_borderLeftColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_borderLeftColorID() const;

constexpr void __set_borderTopColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_borderTopColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_borderTopColorID() const;

constexpr void __set_borderRightColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_borderRightColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_borderRightColorID() const;

constexpr void __set_borderBottomColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_borderBottomColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_borderBottomColorID() const;

constexpr void __set_tintColorID(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __get_tintColorID() ;

constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __get_tintColorID() const;

constexpr void __set_compositeOpacity(float_t  value) ;

constexpr float_t& __get_compositeOpacity() ;

constexpr float_t const& __get_compositeOpacity() const;

constexpr void __set_backgroundColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_backgroundColor() ;

constexpr ::UnityEngine::Color const& __get_backgroundColor() const;

constexpr void __set_prevText(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_prevText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_prevText() const;

constexpr void __set_nextText(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_nextText() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_nextText() const;

constexpr void __set_textEntries(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>* __get_textEntries() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*> __get_textEntries() const;

constexpr void __set_textures(::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*  value) ;

constexpr ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>* __get_textures() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*> __get_textures() const;

/// @brief Method get_lastClosingOrLastCommand addr 0x2e91e18 size 0x18 virtual false final false
inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastClosingOrLastCommand() ;

/// @brief Method AllocatesID addr 0x2e91e30 size 0x34 virtual false final false
static inline bool AllocatesID(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

/// @brief Method InheritsID addr 0x2e91e64 size 0x30 virtual false final false
static inline bool InheritsID(::UnityEngine::UIElements::UIR::BMPAlloc  alloc) ;

// Ctor Parameters [CppParam { name: "prev", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "next", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "groupTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "boneTransformAncestor", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "prevDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "nextDirty", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "hierarchyDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dirtiedValues", ty: "::UnityEngine::UIElements::UIR::RenderDataDirtyTypes", modifiers: "", def_value: None }, CppParam { name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "lastCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "firstClosingCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "lastClosingCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "isInChain", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isHierarchyHidden", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "localTransformScaleZero", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "worldFlipsWinding", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "clipMethod", ty: "::UnityEngine::UIElements::UIR::Implementation::ClipMethod", modifiers: "", def_value: None }, CppParam { name: "childrenStencilRef", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "childrenMaskDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "disableNudging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "usesLegacyText", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "data", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "closingData", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "verticesSpace", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "displacementUVStart", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "displacementUVEnd", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transformID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "clipRectID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "opacityID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "textCoreSettingsID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "backgroundColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderLeftColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderTopColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderRightColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "borderBottomColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "tintColorID", ty: "::UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }, CppParam { name: "compositeOpacity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "prevText", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "nextText", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "textEntries", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*", modifiers: "", def_value: None }, CppParam { name: "textures", ty: "::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*", modifiers: "", def_value: None }]
constexpr RenderChainVEData(::UnityEngine::UIElements::VisualElement*  prev, ::UnityEngine::UIElements::VisualElement*  next, ::UnityEngine::UIElements::VisualElement*  groupTransformAncestor, ::UnityEngine::UIElements::VisualElement*  boneTransformAncestor, ::UnityEngine::UIElements::VisualElement*  prevDirty, ::UnityEngine::UIElements::VisualElement*  nextDirty, int32_t  hierarchyDepth, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes  dirtiedValues, uint32_t  dirtyID, ::UnityEngine::UIElements::UIR::RenderChainCommand*  firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand*  firstClosingCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand*  lastClosingCommand, bool  isInChain, bool  isHierarchyHidden, bool  localFlipsWinding, bool  localTransformScaleZero, bool  worldFlipsWinding, ::UnityEngine::UIElements::UIR::Implementation::ClipMethod  clipMethod, int32_t  childrenStencilRef, int32_t  childrenMaskDepth, bool  disableNudging, bool  usesLegacyText, ::UnityEngine::UIElements::UIR::MeshHandle*  data, ::UnityEngine::UIElements::UIR::MeshHandle*  closingData, ::UnityEngine::Matrix4x4  verticesSpace, int32_t  displacementUVStart, int32_t  displacementUVEnd, ::UnityEngine::UIElements::UIR::BMPAlloc  transformID, ::UnityEngine::UIElements::UIR::BMPAlloc  clipRectID, ::UnityEngine::UIElements::UIR::BMPAlloc  opacityID, ::UnityEngine::UIElements::UIR::BMPAlloc  textCoreSettingsID, ::UnityEngine::UIElements::UIR::BMPAlloc  backgroundColorID, ::UnityEngine::UIElements::UIR::BMPAlloc  borderLeftColorID, ::UnityEngine::UIElements::UIR::BMPAlloc  borderTopColorID, ::UnityEngine::UIElements::UIR::BMPAlloc  borderRightColorID, ::UnityEngine::UIElements::UIR::BMPAlloc  borderBottomColorID, ::UnityEngine::UIElements::UIR::BMPAlloc  tintColorID, float_t  compositeOpacity, ::UnityEngine::Color  backgroundColor, ::UnityEngine::UIElements::VisualElement*  prevText, ::UnityEngine::UIElements::VisualElement*  nextText, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChainTextEntry>*  textEntries, ::UnityEngine::UIElements::UIR::BasicNode_1<::UnityEngine::UIElements::UIR::TextureEntry>*  textures) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RenderChainVEData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x158>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RenderChainVEData()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChainVEData, 0x158>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChainVEData, "UnityEngine.UIElements.UIR", "RenderChainVEData");
