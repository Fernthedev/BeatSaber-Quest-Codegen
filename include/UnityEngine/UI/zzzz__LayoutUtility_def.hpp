#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutUtility)
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine::UI {
class ILayoutElement;
}
namespace UnityEngine::UI {
class __LayoutUtility____c;
}
// Forward declare root types
namespace UnityEngine::UI {
class LayoutUtility;
}
namespace UnityEngine::UI {
class __LayoutUtility____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::LayoutUtility);
MARK_REF_PTR_T(::UnityEngine::UI::__LayoutUtility____c);
// Type: ::<>c
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13094))
// CS Name: ::LayoutUtility::<>c*
class CORDL_TYPE __LayoutUtility____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UI::__LayoutUtility____c*  value) ;

static inline ::UnityEngine::UI::__LayoutUtility____c* getStaticF___9() ;

static inline void setStaticF___9__3_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__3_0() ;

static inline void setStaticF___9__4_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__4_0() ;

static inline void setStaticF___9__4_1(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__4_1() ;

static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__5_0() ;

static inline void setStaticF___9__6_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__6_0() ;

static inline void setStaticF___9__7_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__7_0() ;

static inline void setStaticF___9__7_1(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__7_1() ;

static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  value) ;

static inline ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>* getStaticF___9__8_0() ;

static inline ::UnityEngine::UI::__LayoutUtility____c* New_ctor() ;

/// @brief Method .ctor addr 0x2d7a090 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetMinWidth>b__3_0 addr 0x2d7a098 size 0xa0 virtual false final false
inline float_t _GetMinWidth_b__3_0(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetPreferredWidth>b__4_0 addr 0x2d7a138 size 0xa0 virtual false final false
inline float_t _GetPreferredWidth_b__4_0(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetPreferredWidth>b__4_1 addr 0x2d7a1d8 size 0xa0 virtual false final false
inline float_t _GetPreferredWidth_b__4_1(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetFlexibleWidth>b__5_0 addr 0x2d7a278 size 0xa0 virtual false final false
inline float_t _GetFlexibleWidth_b__5_0(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetMinHeight>b__6_0 addr 0x2d7a318 size 0xa0 virtual false final false
inline float_t _GetMinHeight_b__6_0(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetPreferredHeight>b__7_0 addr 0x2d7a3b8 size 0xa0 virtual false final false
inline float_t _GetPreferredHeight_b__7_0(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetPreferredHeight>b__7_1 addr 0x2d7a458 size 0xa0 virtual false final false
inline float_t _GetPreferredHeight_b__7_1(::UnityEngine::UI::ILayoutElement*  e) ;

/// @brief Method <GetFlexibleHeight>b__8_0 addr 0x2d7a4f8 size 0xa0 virtual false final false
inline float_t _GetFlexibleHeight_b__8_0(::UnityEngine::UI::ILayoutElement*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "__LayoutUtility____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LayoutUtility____c(__LayoutUtility____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LayoutUtility____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LayoutUtility____c(__LayoutUtility____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LayoutUtility____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__3_0

// Static field <>9__4_0

// Static field <>9__4_1

// Static field <>9__5_0

// Static field <>9__6_0

// Static field <>9__7_0

// Static field <>9__7_1

// Static field <>9__8_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__LayoutUtility____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::LayoutUtility
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13095))
// CS Name: ::UnityEngine.UI::LayoutUtility*
class CORDL_TYPE LayoutUtility : public ::System::Object {
public:
// Declarations
using __c = ::UnityEngine::UI::__LayoutUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetMinSize addr 0x2d74ab8 size 0xc virtual false final false
static inline float_t GetMinSize(::UnityEngine::RectTransform*  rect, int32_t  axis) ;

/// @brief Method GetPreferredSize addr 0x2d74ac4 size 0xc virtual false final false
static inline float_t GetPreferredSize(::UnityEngine::RectTransform*  rect, int32_t  axis) ;

/// @brief Method GetFlexibleSize addr 0x2d773d0 size 0xc virtual false final false
static inline float_t GetFlexibleSize(::UnityEngine::RectTransform*  rect, int32_t  axis) ;

/// @brief Method GetMinWidth addr 0x2d7970c size 0xf0 virtual false final false
static inline float_t GetMinWidth(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetPreferredWidth addr 0x2d79990 size 0x194 virtual false final false
static inline float_t GetPreferredWidth(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetFlexibleWidth addr 0x2d79c14 size 0xf0 virtual false final false
static inline float_t GetFlexibleWidth(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetMinHeight addr 0x2d7961c size 0xf0 virtual false final false
static inline float_t GetMinHeight(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetPreferredHeight addr 0x2d797fc size 0x194 virtual false final false
static inline float_t GetPreferredHeight(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetFlexibleHeight addr 0x2d79b24 size 0xf0 virtual false final false
static inline float_t GetFlexibleHeight(::UnityEngine::RectTransform*  rect) ;

/// @brief Method GetLayoutProperty addr 0x2d79d04 size 0x18 virtual false final false
static inline float_t GetLayoutProperty(::UnityEngine::RectTransform*  rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  property, float_t  defaultValue) ;

/// @brief Method GetLayoutProperty addr 0x2d79d1c size 0x310 virtual false final false
static inline float_t GetLayoutProperty(::UnityEngine::RectTransform*  rect, ::System::Func_2<::UnityEngine::UI::ILayoutElement*,float_t>*  property, float_t  defaultValue, ByRef<::UnityEngine::UI::ILayoutElement*>  source) ;

// Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayoutUtility(LayoutUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayoutUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayoutUtility(LayoutUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LayoutUtility()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::LayoutUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::LayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutUtility*, "UnityEngine.UI", "LayoutUtility");
NEED_NO_BOX(::UnityEngine::UI::__LayoutUtility____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__LayoutUtility____c*, "UnityEngine.UI", "LayoutUtility/<>c");
