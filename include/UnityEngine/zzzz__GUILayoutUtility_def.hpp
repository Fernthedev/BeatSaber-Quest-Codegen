#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutUtility)
namespace UnityEngine {
class GUILayoutGroup;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class GUILayoutOption;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
namespace UnityEngineInternal {
class GenericStack;
}
// Forward declare root types
namespace UnityEngine {
class GUILayoutUtility;
}
namespace UnityEngine {
class __GUILayoutUtility__LayoutCache;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::GUILayoutUtility);
MARK_REF_PTR_T(::UnityEngine::__GUILayoutUtility__LayoutCache);
// Type: ::LayoutCache
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14606))
// CS Name: ::GUILayoutUtility::LayoutCache*
class CORDL_TYPE __GUILayoutUtility__LayoutCache : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <id>k__BackingField offset 0x10
 __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField)) int32_t  _id_k__BackingField;

/// @brief Field topLevel offset 0x18
 __declspec(property(get=__get_topLevel, put=__set_topLevel)) ::UnityEngine::GUILayoutGroup*  topLevel;

/// @brief Field layoutGroups offset 0x20
 __declspec(property(get=__get_layoutGroups, put=__set_layoutGroups)) ::UnityEngineInternal::GenericStack*  layoutGroups;

/// @brief Field windows offset 0x28
 __declspec(property(get=__get_windows, put=__set_windows)) ::UnityEngine::GUILayoutGroup*  windows;

 __declspec(property(put=set_id)) int32_t  id;

constexpr void __set__id_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__id_k__BackingField() ;

constexpr int32_t const& __get__id_k__BackingField() const;

constexpr void __set_topLevel(::UnityEngine::GUILayoutGroup*  value) ;

constexpr ::UnityEngine::GUILayoutGroup* __get_topLevel() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> __get_topLevel() const;

constexpr void __set_layoutGroups(::UnityEngineInternal::GenericStack*  value) ;

constexpr ::UnityEngineInternal::GenericStack* __get_layoutGroups() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngineInternal::GenericStack*> __get_layoutGroups() const;

constexpr void __set_windows(::UnityEngine::GUILayoutGroup*  value) ;

constexpr ::UnityEngine::GUILayoutGroup* __get_windows() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GUILayoutGroup*> __get_windows() const;

/// @brief Method set_id addr 0x2d03288 size 0x8 virtual false final false
inline void set_id(int32_t  value) ;

static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* New_ctor(int32_t  instanceID) ;

/// @brief Method .ctor addr 0x2d01d54 size 0xd8 virtual false final false
inline void _ctor(int32_t  instanceID) ;

/// @brief Method ResetCursor addr 0x2d03290 size 0x2e0 virtual false final false
inline void ResetCursor() ;

// Ctor Parameters [CppParam { name: "", ty: "__GUILayoutUtility__LayoutCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GUILayoutUtility__LayoutCache(__GUILayoutUtility__LayoutCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GUILayoutUtility__LayoutCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GUILayoutUtility__LayoutCache(__GUILayoutUtility__LayoutCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GUILayoutUtility__LayoutCache()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUILayoutUtility__LayoutCache, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::GUILayoutUtility
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14607))
// CS Name: ::UnityEngine::GUILayoutUtility*
class CORDL_TYPE GUILayoutUtility : public ::System::Object {
public:
// Declarations
using LayoutCache = ::UnityEngine::__GUILayoutUtility__LayoutCache;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>* getStaticF_s_StoredLayouts() ;

static inline void setStaticF_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::__GUILayoutUtility__LayoutCache*>* getStaticF_s_StoredWindows() ;

static inline void setStaticF_current(::UnityEngine::__GUILayoutUtility__LayoutCache*  value) ;

static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* getStaticF_current() ;

static inline void setStaticF_kDummyRect(::UnityEngine::Rect  value) ;

static inline ::UnityEngine::Rect getStaticF_kDummyRect() ;

/// @brief Method Internal_GetWindowRect addr 0x2d01bb0 size 0x90 virtual false final false
static inline ::UnityEngine::Rect Internal_GetWindowRect(int32_t  windowID) ;

/// @brief Method Internal_MoveWindow addr 0x2d01c84 size 0x8c virtual false final false
static inline void Internal_MoveWindow(int32_t  windowID, ::UnityEngine::Rect  r) ;

/// @brief Method SelectIDList addr 0x2cfd54c size 0x148 virtual false final false
static inline ::UnityEngine::__GUILayoutUtility__LayoutCache* SelectIDList(int32_t  instanceID, bool  isWindow) ;

/// @brief Method Begin addr 0x2d01e2c size 0x1cc virtual false final false
static inline void Begin(int32_t  instanceID) ;

/// @brief Method BeginContainer addr 0x2d02110 size 0x15c virtual false final false
static inline void BeginContainer(::UnityEngine::__GUILayoutUtility__LayoutCache*  cache) ;

/// @brief Method BeginWindow addr 0x2cfd7cc size 0x278 virtual false final false
static inline void BeginWindow(int32_t  windowID, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>  options) ;

/// @brief Method Layout addr 0x2cfda44 size 0x1f8 virtual false final false
static inline void Layout() ;

/// @brief Method LayoutFromEditorWindow addr 0x2d02620 size 0x1ec virtual false final false
static inline void LayoutFromEditorWindow() ;

/// @brief Method LayoutFromContainer addr 0x2d0280c size 0x188 virtual false final false
static inline void LayoutFromContainer(float_t  w, float_t  h) ;

/// @brief Method LayoutFreeGroup addr 0x2d02294 size 0x1bc virtual false final false
static inline void LayoutFreeGroup(::UnityEngine::GUILayoutGroup*  toplevel) ;

/// @brief Method LayoutSingleGroup addr 0x2d02450 size 0x1d0 virtual false final false
static inline void LayoutSingleGroup(::UnityEngine::GUILayoutGroup*  i) ;

/// @brief Method GetRect addr 0x2d0299c size 0x6c virtual false final false
static inline ::UnityEngine::Rect GetRect(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>  options) ;

/// @brief Method DoGetRect addr 0x2d02a08 size 0x338 virtual false final false
static inline ::UnityEngine::Rect DoGetRect(::UnityEngine::GUIContent*  content, ::UnityEngine::GUIStyle*  style, ::ArrayW<::UnityEngine::GUILayoutOption*,::Array<::UnityEngine::GUILayoutOption*>*>  options) ;

/// @brief Method Internal_GetWindowRect_Injected addr 0x2d01c40 size 0x44 virtual false final false
static inline void Internal_GetWindowRect_Injected(int32_t  windowID, ByRef<::UnityEngine::Rect>  ret) ;

/// @brief Method Internal_MoveWindow_Injected addr 0x2d01d10 size 0x44 virtual false final false
static inline void Internal_MoveWindow_Injected(int32_t  windowID, ByRef<::UnityEngine::Rect>  r) ;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUILayoutUtility(GUILayoutUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUILayoutUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUILayoutUtility(GUILayoutUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GUILayoutUtility()  = default;
public:


// Fields

// Static field s_StoredLayouts

// Static field s_StoredWindows

// Static field current

// Static field kDummyRect


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutUtility, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::GUILayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility*, "UnityEngine", "GUILayoutUtility");
NEED_NO_BOX(::UnityEngine::__GUILayoutUtility__LayoutCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUILayoutUtility__LayoutCache*, "UnityEngine", "GUILayoutUtility/LayoutCache");
