#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextMeshProUGUI)
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace TMPro {
struct TMP_VertexDataUpdateFlags;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedGraphicRebuild_d__18;
}
namespace UnityEngine {
class CanvasRenderer;
}
namespace TMPro {
class TMP_SubMeshUI;
}
namespace UnityEngine {
class Canvas;
}
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedMaterialRebuild_d__19;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
class TMP_TextInfo;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
class Mesh;
}
namespace TMPro {
struct __TMP_Text__UnicodeChar;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Material;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace TMPro {
class TextMeshProUGUI;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedGraphicRebuild_d__18;
}
namespace TMPro {
class __TextMeshProUGUI___DelayedMaterialRebuild_d__19;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TextMeshProUGUI);
MARK_REF_PTR_T(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18);
MARK_REF_PTR_T(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19);
// Type: ::<DelayedGraphicRebuild>d__18
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12308))
// CS Name: ::TextMeshProUGUI::<DelayedGraphicRebuild>d__18*
class CORDL_TYPE __TextMeshProUGUI___DelayedGraphicRebuild_d__18 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::TMPro::TextMeshProUGUI*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get___4__this() const;

static inline ::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2bf7ba8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bfe89c size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bfe8a0 size 0xb8 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bfe958 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bfe960 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bfe9a0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextMeshProUGUI___DelayedGraphicRebuild_d__18(__TextMeshProUGUI___DelayedGraphicRebuild_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedGraphicRebuild_d__18", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextMeshProUGUI___DelayedGraphicRebuild_d__18(__TextMeshProUGUI___DelayedGraphicRebuild_d__18 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextMeshProUGUI___DelayedGraphicRebuild_d__18()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18, 0x28>, "Size mismatch!");

} // namespace end def TMPro
// Type: ::<DelayedMaterialRebuild>d__19
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12309))
// CS Name: ::TextMeshProUGUI::<DelayedMaterialRebuild>d__19*
class CORDL_TYPE __TextMeshProUGUI___DelayedMaterialRebuild_d__19 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::TMPro::TextMeshProUGUI*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::TMPro::TextMeshProUGUI*  value) ;

constexpr ::TMPro::TextMeshProUGUI* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> __get___4__this() const;

static inline ::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2bf7c38 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2bfe9a8 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2bfe9ac size 0xc0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2bfea6c size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2bfea74 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2bfeab4 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TextMeshProUGUI___DelayedMaterialRebuild_d__19(__TextMeshProUGUI___DelayedMaterialRebuild_d__19 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TextMeshProUGUI___DelayedMaterialRebuild_d__19", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TextMeshProUGUI___DelayedMaterialRebuild_d__19(__TextMeshProUGUI___DelayedMaterialRebuild_d__19 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TextMeshProUGUI___DelayedMaterialRebuild_d__19()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19, 0x28>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TextMeshProUGUI
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12310))
// CS Name: ::TMPro::TextMeshProUGUI*
class CORDL_TYPE TextMeshProUGUI : public ::TMPro::TMP_Text {
public:
// Declarations
using _DelayedMaterialRebuild_d__19 = ::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19;

using _DelayedGraphicRebuild_d__18 = ::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x798};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x798 - sizeof(::TMPro::TMP_Text)]{};

/// @brief Field m_isRebuildingLayout offset 0x6c0
 __declspec(property(get=__get_m_isRebuildingLayout, put=__set_m_isRebuildingLayout)) bool  m_isRebuildingLayout;

/// @brief Field m_DelayedGraphicRebuild offset 0x6c8
 __declspec(property(get=__get_m_DelayedGraphicRebuild, put=__set_m_DelayedGraphicRebuild)) ::UnityEngine::Coroutine*  m_DelayedGraphicRebuild;

/// @brief Field m_DelayedMaterialRebuild offset 0x6d0
 __declspec(property(get=__get_m_DelayedMaterialRebuild, put=__set_m_DelayedMaterialRebuild)) ::UnityEngine::Coroutine*  m_DelayedMaterialRebuild;

/// @brief Field m_ClipRect offset 0x6d8
 __declspec(property(get=__get_m_ClipRect, put=__set_m_ClipRect)) ::UnityEngine::Rect  m_ClipRect;

/// @brief Field m_ValidRect offset 0x6e8
 __declspec(property(get=__get_m_ValidRect, put=__set_m_ValidRect)) bool  m_ValidRect;

/// @brief Field OnPreRenderText offset 0x6f0
 __declspec(property(get=__get_OnPreRenderText, put=__set_OnPreRenderText)) ::System::Action_1<::TMPro::TMP_TextInfo*>*  OnPreRenderText;

/// @brief Field m_hasFontAssetChanged offset 0x6f8
 __declspec(property(get=__get_m_hasFontAssetChanged, put=__set_m_hasFontAssetChanged)) bool  m_hasFontAssetChanged;

/// @brief Field m_subTextObjects offset 0x700
 __declspec(property(get=__get_m_subTextObjects, put=__set_m_subTextObjects)) ::ArrayW<::TMPro::TMP_SubMeshUI*,::Array<::TMPro::TMP_SubMeshUI*>*>  m_subTextObjects;

/// @brief Field m_previousLossyScaleY offset 0x708
 __declspec(property(get=__get_m_previousLossyScaleY, put=__set_m_previousLossyScaleY)) float_t  m_previousLossyScaleY;

/// @brief Field m_RectTransformCorners offset 0x710
 __declspec(property(get=__get_m_RectTransformCorners, put=__set_m_RectTransformCorners)) ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  m_RectTransformCorners;

/// @brief Field m_canvasRenderer offset 0x718
 __declspec(property(get=__get_m_canvasRenderer, put=__set_m_canvasRenderer)) ::UnityEngine::CanvasRenderer*  m_canvasRenderer;

/// @brief Field m_canvas offset 0x720
 __declspec(property(get=__get_m_canvas, put=__set_m_canvas)) ::UnityEngine::Canvas*  m_canvas;

/// @brief Field m_CanvasScaleFactor offset 0x728
 __declspec(property(get=__get_m_CanvasScaleFactor, put=__set_m_CanvasScaleFactor)) float_t  m_CanvasScaleFactor;

/// @brief Field m_isFirstAllocation offset 0x72c
 __declspec(property(get=__get_m_isFirstAllocation, put=__set_m_isFirstAllocation)) bool  m_isFirstAllocation;

/// @brief Field m_max_characters offset 0x730
 __declspec(property(get=__get_m_max_characters, put=__set_m_max_characters)) int32_t  m_max_characters;

/// @brief Field m_baseMaterial offset 0x738
 __declspec(property(get=__get_m_baseMaterial, put=__set_m_baseMaterial)) ::UnityEngine::Material*  m_baseMaterial;

/// @brief Field m_isScrollRegionSet offset 0x740
 __declspec(property(get=__get_m_isScrollRegionSet, put=__set_m_isScrollRegionSet)) bool  m_isScrollRegionSet;

/// @brief Field m_maskOffset offset 0x744
 __declspec(property(get=__get_m_maskOffset, put=__set_m_maskOffset)) ::UnityEngine::Vector4  m_maskOffset;

/// @brief Field m_EnvMapMatrix offset 0x754
 __declspec(property(get=__get_m_EnvMapMatrix, put=__set_m_EnvMapMatrix)) ::UnityEngine::Matrix4x4  m_EnvMapMatrix;

/// @brief Field m_isRegisteredForEvents offset 0x794
 __declspec(property(get=__get_m_isRegisteredForEvents, put=__set_m_isRegisteredForEvents)) bool  m_isRegisteredForEvents;

 __declspec(property(get=get_materialForRendering)) ::UnityEngine::Material*  materialForRendering;

 __declspec(property(get=get_autoSizeTextContainer, put=set_autoSizeTextContainer)) bool  autoSizeTextContainer;

 __declspec(property(get=get_mesh)) ::UnityEngine::Mesh*  mesh;

 __declspec(property(get=get_canvasRenderer)) ::UnityEngine::CanvasRenderer*  canvasRenderer;

 __declspec(property(get=get_maskOffset, put=set_maskOffset)) ::UnityEngine::Vector4  maskOffset;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr operator  ::UnityEngine::UI::ILayoutElement*() noexcept;

constexpr void __set_m_isRebuildingLayout(bool  value) ;

constexpr bool& __get_m_isRebuildingLayout() ;

constexpr bool const& __get_m_isRebuildingLayout() const;

constexpr void __set_m_DelayedGraphicRebuild(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get_m_DelayedGraphicRebuild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get_m_DelayedGraphicRebuild() const;

constexpr void __set_m_DelayedMaterialRebuild(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get_m_DelayedMaterialRebuild() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get_m_DelayedMaterialRebuild() const;

constexpr void __set_m_ClipRect(::UnityEngine::Rect  value) ;

constexpr ::UnityEngine::Rect& __get_m_ClipRect() ;

constexpr ::UnityEngine::Rect const& __get_m_ClipRect() const;

constexpr void __set_m_ValidRect(bool  value) ;

constexpr bool& __get_m_ValidRect() ;

constexpr bool const& __get_m_ValidRect() const;

constexpr void __set_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>*  value) ;

constexpr ::System::Action_1<::TMPro::TMP_TextInfo*>* __get_OnPreRenderText() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::TMPro::TMP_TextInfo*>*> __get_OnPreRenderText() const;

constexpr void __set_m_hasFontAssetChanged(bool  value) ;

constexpr bool& __get_m_hasFontAssetChanged() ;

constexpr bool const& __get_m_hasFontAssetChanged() const;

constexpr void __set_m_subTextObjects(::ArrayW<::TMPro::TMP_SubMeshUI*,::Array<::TMPro::TMP_SubMeshUI*>*>  value) ;

constexpr ::ArrayW<::TMPro::TMP_SubMeshUI*,::Array<::TMPro::TMP_SubMeshUI*>*>& __get_m_subTextObjects() ;

constexpr ::ArrayW<::TMPro::TMP_SubMeshUI*,::Array<::TMPro::TMP_SubMeshUI*>*> const& __get_m_subTextObjects() const;

constexpr void __set_m_previousLossyScaleY(float_t  value) ;

constexpr float_t& __get_m_previousLossyScaleY() ;

constexpr float_t const& __get_m_previousLossyScaleY() const;

constexpr void __set_m_RectTransformCorners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& __get_m_RectTransformCorners() ;

constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& __get_m_RectTransformCorners() const;

constexpr void __set_m_canvasRenderer(::UnityEngine::CanvasRenderer*  value) ;

constexpr ::UnityEngine::CanvasRenderer* __get_m_canvasRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasRenderer*> __get_m_canvasRenderer() const;

constexpr void __set_m_canvas(::UnityEngine::Canvas*  value) ;

constexpr ::UnityEngine::Canvas* __get_m_canvas() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> __get_m_canvas() const;

constexpr void __set_m_CanvasScaleFactor(float_t  value) ;

constexpr float_t& __get_m_CanvasScaleFactor() ;

constexpr float_t const& __get_m_CanvasScaleFactor() const;

constexpr void __set_m_isFirstAllocation(bool  value) ;

constexpr bool& __get_m_isFirstAllocation() ;

constexpr bool const& __get_m_isFirstAllocation() const;

constexpr void __set_m_max_characters(int32_t  value) ;

constexpr int32_t& __get_m_max_characters() ;

constexpr int32_t const& __get_m_max_characters() const;

constexpr void __set_m_baseMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_m_baseMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_m_baseMaterial() const;

constexpr void __set_m_isScrollRegionSet(bool  value) ;

constexpr bool& __get_m_isScrollRegionSet() ;

constexpr bool const& __get_m_isScrollRegionSet() const;

constexpr void __set_m_maskOffset(::UnityEngine::Vector4  value) ;

constexpr ::UnityEngine::Vector4& __get_m_maskOffset() ;

constexpr ::UnityEngine::Vector4 const& __get_m_maskOffset() const;

constexpr void __set_m_EnvMapMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr ::UnityEngine::Matrix4x4& __get_m_EnvMapMatrix() ;

constexpr ::UnityEngine::Matrix4x4 const& __get_m_EnvMapMatrix() const;

constexpr void __set_m_isRegisteredForEvents(bool  value) ;

constexpr bool& __get_m_isRegisteredForEvents() ;

constexpr bool const& __get_m_isRegisteredForEvents() const;

static inline void setStaticF_k_GenerateTextMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextMarker() ;

static inline void setStaticF_k_SetArraySizesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SetArraySizesMarker() ;

static inline void setStaticF_k_GenerateTextPhaseIMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIMarker() ;

static inline void setStaticF_k_ParseMarkupTextMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ParseMarkupTextMarker() ;

static inline void setStaticF_k_CharacterLookupMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CharacterLookupMarker() ;

static inline void setStaticF_k_HandleGPOSFeaturesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleGPOSFeaturesMarker() ;

static inline void setStaticF_k_CalculateVerticesPositionMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_CalculateVerticesPositionMarker() ;

static inline void setStaticF_k_ComputeTextMetricsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTextMetricsMarker() ;

static inline void setStaticF_k_HandleVisibleCharacterMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVisibleCharacterMarker() ;

static inline void setStaticF_k_HandleWhiteSpacesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleWhiteSpacesMarker() ;

static inline void setStaticF_k_HandleHorizontalLineBreakingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleHorizontalLineBreakingMarker() ;

static inline void setStaticF_k_HandleVerticalLineBreakingMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleVerticalLineBreakingMarker() ;

static inline void setStaticF_k_SaveGlyphVertexDataMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveGlyphVertexDataMarker() ;

static inline void setStaticF_k_ComputeCharacterAdvanceMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeCharacterAdvanceMarker() ;

static inline void setStaticF_k_HandleCarriageReturnMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleCarriageReturnMarker() ;

static inline void setStaticF_k_HandleLineTerminationMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HandleLineTerminationMarker() ;

static inline void setStaticF_k_SavePageInfoMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SavePageInfoMarker() ;

static inline void setStaticF_k_SaveProcessingStatesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_SaveProcessingStatesMarker() ;

static inline void setStaticF_k_GenerateTextPhaseIIMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIMarker() ;

static inline void setStaticF_k_GenerateTextPhaseIIIMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateTextPhaseIIIMarker() ;

/// @brief Method get_materialForRendering addr 0x2bf7690 size 0x60 virtual true final false
inline ::UnityEngine::Material* get_materialForRendering() ;

/// @brief Method get_autoSizeTextContainer addr 0x2bf76f0 size 0x8 virtual true final false
inline bool get_autoSizeTextContainer() ;

/// @brief Method set_autoSizeTextContainer addr 0x2bf76f8 size 0xa0 virtual true final false
inline void set_autoSizeTextContainer(bool  value) ;

/// @brief Method get_mesh addr 0x2bf7798 size 0x8 virtual true final false
inline ::UnityEngine::Mesh* get_mesh() ;

/// @brief Method get_canvasRenderer addr 0x2bf77a0 size 0x94 virtual false final false
inline ::UnityEngine::CanvasRenderer* get_canvasRenderer() ;

/// @brief Method CalculateLayoutInputHorizontal addr 0x2bf7834 size 0x4 virtual true final true
inline void CalculateLayoutInputHorizontal() ;

/// @brief Method CalculateLayoutInputVertical addr 0x2bf7838 size 0x4 virtual true final true
inline void CalculateLayoutInputVertical() ;

/// @brief Method SetVerticesDirty addr 0x2bf783c size 0xe4 virtual true final false
inline void SetVerticesDirty() ;

/// @brief Method SetLayoutDirty addr 0x2bf7920 size 0xf0 virtual true final false
inline void SetLayoutDirty() ;

/// @brief Method SetMaterialDirty addr 0x2bf7a10 size 0xec virtual true final false
inline void SetMaterialDirty() ;

/// @brief Method SetAllDirty addr 0x2bf7afc size 0x44 virtual true final false
inline void SetAllDirty() ;

/// @brief Method DelayedGraphicRebuild addr 0x2bf7b40 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* DelayedGraphicRebuild() ;

/// @brief Method DelayedMaterialRebuild addr 0x2bf7bd0 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* DelayedMaterialRebuild() ;

/// @brief Method Rebuild addr 0x2bf7c60 size 0xe8 virtual true final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  update) ;

/// @brief Method UpdateSubObjectPivot addr 0x2bf7fd0 size 0xd4 virtual false final false
inline void UpdateSubObjectPivot() ;

/// @brief Method GetModifiedMaterial addr 0x2bf80a4 size 0x100 virtual true final false
inline ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material*  baseMaterial) ;

/// @brief Method UpdateMaterial addr 0x2bf81a4 size 0xec virtual true final false
inline void UpdateMaterial() ;

/// @brief Method get_maskOffset addr 0x2bf8290 size 0x14 virtual false final false
inline ::UnityEngine::Vector4 get_maskOffset() ;

/// @brief Method set_maskOffset addr 0x2bf82a4 size 0x2c virtual false final false
inline void set_maskOffset(::UnityEngine::Vector4  value) ;

/// @brief Method RecalculateClipping addr 0x2bf8620 size 0x8 virtual true final false
inline void RecalculateClipping() ;

/// @brief Method Cull addr 0x2bf8628 size 0x220 virtual true final false
inline void Cull(::UnityEngine::Rect  clipRect, bool  validRect) ;

/// @brief Method UpdateCulling addr 0x2bf8848 size 0x1cc virtual true final false
inline void UpdateCulling() ;

/// @brief Method UpdateMeshPadding addr 0x2bf8a14 size 0x100 virtual true final false
inline void UpdateMeshPadding() ;

/// @brief Method InternalCrossFadeColor addr 0x2bf8b14 size 0xcc virtual true final false
inline void InternalCrossFadeColor(::UnityEngine::Color  targetColor, float_t  duration, bool  ignoreTimeScale, bool  useAlpha) ;

/// @brief Method InternalCrossFadeAlpha addr 0x2bf8be0 size 0x9c virtual true final false
inline void InternalCrossFadeAlpha(float_t  alpha, float_t  duration, bool  ignoreTimeScale) ;

/// @brief Method ForceMeshUpdate addr 0x2bf8c7c size 0xa8 virtual true final false
inline void ForceMeshUpdate(bool  ignoreActiveState, bool  forceTextReparsing) ;

/// @brief Method GetTextInfo addr 0x2bf8d24 size 0xe8 virtual true final false
inline ::TMPro::TMP_TextInfo* GetTextInfo(::StringW  text) ;

/// @brief Method ClearMesh addr 0x2bf8e0c size 0xf0 virtual true final false
inline void ClearMesh() ;

/// @brief Method add_OnPreRenderText addr 0x2bf8efc size 0xb4 virtual true final false
inline void add_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>*  value) ;

/// @brief Method remove_OnPreRenderText addr 0x2bf8fb0 size 0xb4 virtual true final false
inline void remove_OnPreRenderText(::System::Action_1<::TMPro::TMP_TextInfo*>*  value) ;

/// @brief Method UpdateGeometry addr 0x2bf9064 size 0x78 virtual true final false
inline void UpdateGeometry(::UnityEngine::Mesh*  mesh, int32_t  index) ;

/// @brief Method UpdateVertexData addr 0x2bf90dc size 0x1e0 virtual true final false
inline void UpdateVertexData(::TMPro::TMP_VertexDataUpdateFlags  flags) ;

/// @brief Method UpdateVertexData addr 0x2bf92bc size 0x1dc virtual true final false
inline void UpdateVertexData() ;

/// @brief Method UpdateFontAsset addr 0x2bf9498 size 0x10 virtual false final false
inline void UpdateFontAsset() ;

/// @brief Method Awake addr 0x2bf94a8 size 0x388 virtual true final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2bf9830 size 0x130 virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2bf9ac4 size 0x1a4 virtual true final false
inline void OnDisable() ;

/// @brief Method OnDestroy addr 0x2bf9c68 size 0x15c virtual true final false
inline void OnDestroy() ;

/// @brief Method LoadFontAsset addr 0x2bf9dc4 size 0x5c0 virtual true final false
inline void LoadFontAsset() ;

/// @brief Method GetCanvas addr 0x2bf9960 size 0x164 virtual false final false
inline ::UnityEngine::Canvas* GetCanvas() ;

/// @brief Method UpdateEnvMapMatrix addr 0x2bfa384 size 0x27c virtual false final false
inline void UpdateEnvMapMatrix() ;

/// @brief Method EnableMasking addr 0x2bfa600 size 0x1a4 virtual false final false
inline void EnableMasking() ;

/// @brief Method DisableMasking addr 0x2bfa7a4 size 0x4 virtual false final false
inline void DisableMasking() ;

/// @brief Method UpdateMask addr 0x2bf82d0 size 0x350 virtual false final false
inline void UpdateMask() ;

/// @brief Method GetMaterial addr 0x2bfa7a8 size 0x144 virtual true final false
inline ::UnityEngine::Material* GetMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method GetMaterials addr 0x2bfa8ec size 0x1b0 virtual true final false
inline ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> GetMaterials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  mats) ;

/// @brief Method SetSharedMaterial addr 0x2bfaa9c size 0x38 virtual true final false
inline void SetSharedMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method GetSharedMaterials addr 0x2bfaad4 size 0x190 virtual true final false
inline ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*> GetSharedMaterials() ;

/// @brief Method SetSharedMaterials addr 0x2bfac64 size 0x3ac virtual true final false
inline void SetSharedMaterials(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  materials) ;

/// @brief Method SetOutlineThickness addr 0x2bfb010 size 0x1c4 virtual true final false
inline void SetOutlineThickness(float_t  thickness) ;

/// @brief Method SetFaceColor addr 0x2bfb1d4 size 0x130 virtual true final false
inline void SetFaceColor(::UnityEngine::Color32  color) ;

/// @brief Method SetOutlineColor addr 0x2bfb304 size 0x130 virtual true final false
inline void SetOutlineColor(::UnityEngine::Color32  color) ;

/// @brief Method SetShaderDepth addr 0x2bfb434 size 0x124 virtual true final false
inline void SetShaderDepth() ;

/// @brief Method SetCulling addr 0x2bfb558 size 0x2cc virtual true final false
inline void SetCulling() ;

/// @brief Method SetPerspectiveCorrection addr 0x2bfb824 size 0x84 virtual false final false
inline void SetPerspectiveCorrection() ;

/// @brief Method SetMeshArrays addr 0x2bfb8a8 size 0x64 virtual false final false
inline void SetMeshArrays(int32_t  size) ;

/// @brief Method SetArraySizes addr 0x2bfb90c size 0x1c04 virtual true final false
inline int32_t SetArraySizes(::ArrayW<::TMPro::__TMP_Text__UnicodeChar,::Array<::TMPro::__TMP_Text__UnicodeChar>*>  unicodeChars) ;

/// @brief Method ComputeMarginSize addr 0x2bfd510 size 0x124 virtual true final false
inline void ComputeMarginSize() ;

/// @brief Method OnDidApplyAnimationProperties addr 0x2bfd634 size 0x38 virtual true final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2bfd66c size 0x118 virtual true final false
inline void OnCanvasHierarchyChanged() ;

/// @brief Method OnTransformParentChanged addr 0x2bfd784 size 0x44 virtual true final false
inline void OnTransformParentChanged() ;

/// @brief Method OnRectTransformDimensionsChange addr 0x2bfd7c8 size 0x1fc virtual true final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method InternalUpdate addr 0x2bfd9c4 size 0x9c virtual true final false
inline void InternalUpdate() ;

/// @brief Method OnPreRenderCanvas addr 0x2bf7d48 size 0x288 virtual false final false
inline void OnPreRenderCanvas() ;

/// @brief Method GenerateTextMesh addr 0x2be7610 size 0x7ad0 virtual true final false
inline void GenerateTextMesh() ;

/// @brief Method GetTextContainerLocalCorners addr 0x2bfdc70 size 0x9c virtual true final false
inline ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> GetTextContainerLocalCorners() ;

/// @brief Method SetActiveSubMeshes addr 0x2bfdd0c size 0x108 virtual true final false
inline void SetActiveSubMeshes(bool  state) ;

/// @brief Method DestroySubMeshObjects addr 0x2bfde14 size 0xdc virtual true final false
inline void DestroySubMeshObjects() ;

/// @brief Method GetCompoundBounds addr 0x2bfdef0 size 0x248 virtual true final false
inline ::UnityEngine::Bounds GetCompoundBounds() ;

/// @brief Method GetCanvasSpaceClippingRect addr 0x2bfe138 size 0x1f0 virtual true final false
inline ::UnityEngine::Rect GetCanvasSpaceClippingRect() ;

/// @brief Method UpdateSDFScale addr 0x2bfda60 size 0x210 virtual false final false
inline void UpdateSDFScale(float_t  scaleDelta) ;

static inline ::TMPro::TextMeshProUGUI* New_ctor() ;

/// @brief Method .ctor addr 0x2bfe328 size 0xb8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextMeshProUGUI(TextMeshProUGUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextMeshProUGUI", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextMeshProUGUI(TextMeshProUGUI const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TextMeshProUGUI()  = default;
public:


// Fields

// Static field k_GenerateTextMarker

// Static field k_SetArraySizesMarker

// Static field k_GenerateTextPhaseIMarker

// Static field k_ParseMarkupTextMarker

// Static field k_CharacterLookupMarker

// Static field k_HandleGPOSFeaturesMarker

// Static field k_CalculateVerticesPositionMarker

// Static field k_ComputeTextMetricsMarker

// Static field k_HandleVisibleCharacterMarker

// Static field k_HandleWhiteSpacesMarker

// Static field k_HandleHorizontalLineBreakingMarker

// Static field k_HandleVerticalLineBreakingMarker

// Static field k_SaveGlyphVertexDataMarker

// Static field k_ComputeCharacterAdvanceMarker

// Static field k_HandleCarriageReturnMarker

// Static field k_HandleLineTerminationMarker

// Static field k_SavePageInfoMarker

// Static field k_SaveProcessingStatesMarker

// Static field k_GenerateTextPhaseIIMarker

// Static field k_GenerateTextPhaseIIIMarker


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TextMeshProUGUI, 0x798>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TextMeshProUGUI);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TextMeshProUGUI*, "TMPro", "TextMeshProUGUI");
NEED_NO_BOX(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TextMeshProUGUI___DelayedGraphicRebuild_d__18*, "TMPro", "TextMeshProUGUI/<DelayedGraphicRebuild>d__18");
NEED_NO_BOX(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TextMeshProUGUI___DelayedMaterialRebuild_d__19*, "TMPro", "TextMeshProUGUI/<DelayedMaterialRebuild>d__19");
