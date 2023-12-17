#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__CollectionVirtualizationController_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VerticalVirtualizationController_1)
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __VerticalVirtualizationController_1____c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
namespace UnityEngine::UIElements {
class BaseVerticalCollectionView;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class VerticalVirtualizationController_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class __VerticalVirtualizationController_1____c;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class VerticalVirtualizationController_1<T>;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class __VerticalVirtualizationController_1____c<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::VerticalVirtualizationController_1);
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c);
// Type: ::<>c
// Type: UnityEngine.UIElements::VerticalVirtualizationController`1
// Type: ::<>c
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7369)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7369), inst: 2 })
// CS Name: ::VerticalVirtualizationController`1::<>c<T>*
class CORDL_TYPE __VerticalVirtualizationController_1____c<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>*  value) ;

static inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* getStaticF___9() ;

static inline void setStaticF___9__25_0(::System::Func_1<T>*  value) ;

static inline ::System::Func_1<T>* getStaticF___9__25_0() ;

static inline void setStaticF___9__25_1(::System::Action_1<T>*  value) ;

static inline ::System::Action_1<T>* getStaticF___9__25_1() ;

static inline ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <.ctor>b__25_0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline T __ctor_b__25_0() ;

/// @brief Method <.ctor>b__25_1 addr 0x0 size 0xffffffffffffffff virtual false final false
inline void __ctor_b__25_1(T  i) ;

// Ctor Parameters [CppParam { name: "", ty: "__VerticalVirtualizationController_1____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__VerticalVirtualizationController_1____c(__VerticalVirtualizationController_1____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__VerticalVirtualizationController_1____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__VerticalVirtualizationController_1____c(__VerticalVirtualizationController_1____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __VerticalVirtualizationController_1____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__25_0

// Static field <>9__25_1


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VerticalVirtualizationController`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7370)), TypeDefinitionIndex(TypeDefinitionIndex(7371))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7370), inst: 2 })
// CS Name: ::UnityEngine.UIElements::VerticalVirtualizationController`1<T>*
class CORDL_TYPE VerticalVirtualizationController_1<T> : public ::UnityEngine::UIElements::CollectionVirtualizationController {
public:
// Declarations
using __c = ::UnityEngine::UIElements::__VerticalVirtualizationController_1____c<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::UIElements::CollectionVirtualizationController)]{};

/// @brief Field m_ListView offset 0x18
 __declspec(property(get=__get_m_ListView, put=__set_m_ListView)) ::UnityEngine::UIElements::BaseVerticalCollectionView*  m_ListView;

/// @brief Field m_Pool offset 0x20
 __declspec(property(get=__get_m_Pool, put=__set_m_Pool)) ::UnityEngine::Pool::ObjectPool_1<T>*  m_Pool;

/// @brief Field m_ActiveItems offset 0x28
 __declspec(property(get=__get_m_ActiveItems, put=__set_m_ActiveItems)) ::System::Collections::Generic::List_1<T>*  m_ActiveItems;

/// @brief Field m_LastFocusedElementIndex offset 0x30
 __declspec(property(get=__get_m_LastFocusedElementIndex, put=__set_m_LastFocusedElementIndex)) int32_t  m_LastFocusedElementIndex;

/// @brief Field m_LastFocusedElementTreeChildIndexes offset 0x38
 __declspec(property(get=__get_m_LastFocusedElementTreeChildIndexes, put=__set_m_LastFocusedElementTreeChildIndexes)) ::System::Collections::Generic::List_1<int32_t>*  m_LastFocusedElementTreeChildIndexes;

/// @brief Field m_FirstVisibleIndex offset 0x40
 __declspec(property(get=__get_m_FirstVisibleIndex, put=__set_m_FirstVisibleIndex)) int32_t  m_FirstVisibleIndex;

/// @brief Field m_VisibleItemPredicateDelegate offset 0x48
 __declspec(property(get=__get_m_VisibleItemPredicateDelegate, put=__set_m_VisibleItemPredicateDelegate)) ::System::Func_2<T,bool>*  m_VisibleItemPredicateDelegate;

/// @brief Field m_ScrollInsertionList offset 0x50
 __declspec(property(get=__get_m_ScrollInsertionList, put=__set_m_ScrollInsertionList)) ::System::Collections::Generic::List_1<T>*  m_ScrollInsertionList;

/// @brief Field k_EmptyRows offset 0x58
 __declspec(property(get=__get_k_EmptyRows, put=__set_k_EmptyRows)) ::UnityEngine::UIElements::VisualElement*  k_EmptyRows;

 __declspec(property(get=get_activeItems)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>*  activeItems;

 __declspec(property(get=get_firstVisibleItem)) T  firstVisibleItem;

 __declspec(property(get=get_lastVisibleItem)) T  lastVisibleItem;

 __declspec(property(get=get_visibleItemCount)) int32_t  visibleItemCount;

 __declspec(property(get=get_lastVisibleIndex)) int32_t  lastVisibleIndex;

 __declspec(property(get=get_lastHeight)) float_t  lastHeight;

constexpr void __set_m_ListView(::UnityEngine::UIElements::BaseVerticalCollectionView*  value) ;

constexpr ::UnityEngine::UIElements::BaseVerticalCollectionView* __get_m_ListView() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseVerticalCollectionView*> __get_m_ListView() const;

constexpr void __set_m_Pool(::UnityEngine::Pool::ObjectPool_1<T>*  value) ;

constexpr ::UnityEngine::Pool::ObjectPool_1<T>* __get_m_Pool() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Pool::ObjectPool_1<T>*> __get_m_Pool() const;

constexpr void __set_m_ActiveItems(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get_m_ActiveItems() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get_m_ActiveItems() const;

constexpr void __set_m_LastFocusedElementIndex(int32_t  value) ;

constexpr int32_t& __get_m_LastFocusedElementIndex() ;

constexpr int32_t const& __get_m_LastFocusedElementIndex() const;

constexpr void __set_m_LastFocusedElementTreeChildIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr ::System::Collections::Generic::List_1<int32_t>* __get_m_LastFocusedElementTreeChildIndexes() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<int32_t>*> __get_m_LastFocusedElementTreeChildIndexes() const;

constexpr void __set_m_FirstVisibleIndex(int32_t  value) ;

constexpr int32_t& __get_m_FirstVisibleIndex() ;

constexpr int32_t const& __get_m_FirstVisibleIndex() const;

constexpr void __set_m_VisibleItemPredicateDelegate(::System::Func_2<T,bool>*  value) ;

constexpr ::System::Func_2<T,bool>* __get_m_VisibleItemPredicateDelegate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T,bool>*> __get_m_VisibleItemPredicateDelegate() const;

constexpr void __set_m_ScrollInsertionList(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get_m_ScrollInsertionList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get_m_ScrollInsertionList() const;

constexpr void __set_k_EmptyRows(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr ::UnityEngine::UIElements::VisualElement* __get_k_EmptyRows() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> __get_k_EmptyRows() const;

/// @brief Method get_activeItems addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::UIElements::ReusableCollectionItem*>* get_activeItems() ;

/// @brief Method VisibleItemPredicate addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool VisibleItemPredicate(T  i) ;

/// @brief Method get_firstVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_firstVisibleItem() ;

/// @brief Method get_lastVisibleItem addr 0x0 size 0xffffffffffffffff virtual false final false
inline T get_lastVisibleItem() ;

/// @brief Method get_visibleItemCount addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_visibleItemCount() ;

/// @brief Method get_lastVisibleIndex addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t get_lastVisibleIndex() ;

/// @brief Method get_lastHeight addr 0x0 size 0xffffffffffffffff virtual false final false
inline float_t get_lastHeight() ;

static inline ::UnityEngine::UIElements::VerticalVirtualizationController_1<T>* New_ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::UIElements::BaseVerticalCollectionView*  collectionView) ;

/// @brief Method Refresh addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Refresh(bool  rebuild) ;

/// @brief Method Setup addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Setup(T  recycledItem, int32_t  newIndex) ;

/// @brief Method OnFocus addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnFocus(::UnityEngine::UIElements::VisualElement*  leafTarget) ;

/// @brief Method OnBlur addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnBlur(::UnityEngine::UIElements::VisualElement*  willFocus) ;

/// @brief Method HandleFocus addr 0x0 size 0xffffffffffffffff virtual false final false
inline void HandleFocus(::UnityEngine::UIElements::ReusableCollectionItem*  recycledItem, int32_t  previousIndex) ;

/// @brief Method UpdateBackground addr 0x0 size 0xffffffffffffffff virtual true final false
inline void UpdateBackground() ;

/// @brief Method ReplaceActiveItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReplaceActiveItem(int32_t  index) ;

/// @brief Method GetOrMakeItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline T GetOrMakeItem() ;

/// @brief Method ReleaseItem addr 0x0 size 0xffffffffffffffff virtual true final false
inline void ReleaseItem(int32_t  activeItemsIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VerticalVirtualizationController_1(VerticalVirtualizationController_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VerticalVirtualizationController_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VerticalVirtualizationController_1(VerticalVirtualizationController_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VerticalVirtualizationController_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::VerticalVirtualizationController_1, "UnityEngine.UIElements", "VerticalVirtualizationController`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::__VerticalVirtualizationController_1____c, "UnityEngine.UIElements", "VerticalVirtualizationController`1/<>c");
