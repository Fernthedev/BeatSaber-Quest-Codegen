#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridView)
namespace GlobalNamespace {
class __GridView__IDataSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
class RectTransform;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator___GetEnumerator_d__1;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct __Dictionary_2__KeyCollection__Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
struct __List_1__Enumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class GridView;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator___GetEnumerator_d__1;
}
namespace GlobalNamespace {
class __GridView__IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GridView);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__GridViewCellsEnumerator);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__IDataSource);
// Type: ::IDataSource
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5784))
// CS Name: ::GridView::IDataSource*
class CORDL_TYPE __GridView__IDataSource {
public:
// Declarations
/// @brief Method GetNumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t GetNumberOfCells() ;

/// @brief Method GetCellWidth addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetCellWidth() ;

/// @brief Method GetCellHeight addr 0x0 size 0xffffffffffffffff virtual true final false
inline float_t GetCellHeight() ;

/// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::MonoBehaviour* CellForIdx(::GlobalNamespace::GridView*  gridView, int32_t  idx) ;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__IDataSource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GridView__IDataSource(__GridView__IDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__IDataSource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GridView__IDataSource(__GridView__IDataSource const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetEnumerator>d__1
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5785))
// CS Name: ::GridView::GridViewCellsEnumerator::<GetEnumerator>d__1*
class CORDL_TYPE __GridView__GridViewCellsEnumerator___GetEnumerator_d__1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::MonoBehaviour*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator*  __4__this;

/// @brief Field <>7__wrap1 offset 0x28
 __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1)) ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>  __7__wrap1;

/// @brief Field <>7__wrap2 offset 0x40
 __declspec(property(get=__get___7__wrap2, put=__set___7__wrap2)) ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::MonoBehaviour*>  __7__wrap2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current)) ::UnityEngine::MonoBehaviour*  System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::MonoBehaviour*  value) ;

constexpr ::UnityEngine::MonoBehaviour* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MonoBehaviour*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::__GridView__GridViewCellsEnumerator*  value) ;

constexpr ::GlobalNamespace::__GridView__GridViewCellsEnumerator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__GridViewCellsEnumerator*> __get___4__this() const;

constexpr void __set___7__wrap1(::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>  value) ;

constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>& __get___7__wrap1() ;

constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*> const& __get___7__wrap1() const;

constexpr void __set___7__wrap2(::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::MonoBehaviour*>  value) ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::MonoBehaviour*>& __get___7__wrap2() ;

constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityEngine::MonoBehaviour*> const& __get___7__wrap2() const;

static inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x22e2aec size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x22e2b18 size 0xb8 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x22e2bd0 size 0x2b0 virtual true final true
inline bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x22e2ed0 size 0x50 virtual false final false
inline void __m__Finally1() ;

/// @brief Method <>m__Finally2 addr 0x22e2e80 size 0x50 virtual false final false
inline void __m__Finally2() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current addr 0x22e2f20 size 0x8 virtual true final true
inline ::UnityEngine::MonoBehaviour* System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x22e2f28 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22e2f68 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GridView__GridViewCellsEnumerator___GetEnumerator_d__1(__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GridView__GridViewCellsEnumerator___GetEnumerator_d__1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GridViewCellsEnumerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5786))
// CS Name: ::GridView::GridViewCellsEnumerator*
class CORDL_TYPE __GridView__GridViewCellsEnumerator : public ::System::Object {
public:
// Declarations
using _GetEnumerator_d__1 = ::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field _gridView offset 0x10
 __declspec(property(get=__get__gridView, put=__set__gridView)) ::GlobalNamespace::GridView*  _gridView;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

constexpr void __set__gridView(::GlobalNamespace::GridView*  value) ;

constexpr ::GlobalNamespace::GridView* __get__gridView() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GridView*> __get__gridView() const;

/// @brief Method GetEnumerator addr 0x22dd2e4 size 0x68 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::MonoBehaviour*>* GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x22e2b14 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

static inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator* New_ctor(::GlobalNamespace::GridView*  gridView) ;

/// @brief Method .ctor addr 0x22e2a04 size 0x28 virtual false final false
inline void _ctor(::GlobalNamespace::GridView*  gridView) ;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GridView__GridViewCellsEnumerator(__GridView__GridViewCellsEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GridView__GridViewCellsEnumerator(__GridView__GridViewCellsEnumerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __GridView__GridViewCellsEnumerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GridView__GridViewCellsEnumerator, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GridView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5787))
// CS Name: ::GridView*
class CORDL_TYPE GridView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GridViewCellsEnumerator = ::GlobalNamespace::__GridView__GridViewCellsEnumerator;

using IDataSource = ::GlobalNamespace::__GridView__IDataSource;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _contentTransform offset 0x18
 __declspec(property(get=__get__contentTransform, put=__set__contentTransform)) ::UnityEngine::RectTransform*  _contentTransform;

/// @brief Field <cellsEnumerator>k__BackingField offset 0x20
 __declspec(property(get=__get__cellsEnumerator_k__BackingField, put=__set__cellsEnumerator_k__BackingField)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator*  _cellsEnumerator_k__BackingField;

/// @brief Field _dataSource offset 0x28
 __declspec(property(get=__get__dataSource, put=__set__dataSource)) ::GlobalNamespace::__GridView__IDataSource*  _dataSource;

/// @brief Field _columnCount offset 0x30
 __declspec(property(get=__get__columnCount, put=__set__columnCount)) int32_t  _columnCount;

/// @brief Field _rowCount offset 0x34
 __declspec(property(get=__get__rowCount, put=__set__rowCount)) int32_t  _rowCount;

/// @brief Field _availableCellsPerPrefabDictionary offset 0x38
 __declspec(property(get=__get__availableCellsPerPrefabDictionary, put=__set__availableCellsPerPrefabDictionary)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>*  _availableCellsPerPrefabDictionary;

/// @brief Field _spawnedCellsPerPrefabDictionary offset 0x40
 __declspec(property(get=__get__spawnedCellsPerPrefabDictionary, put=__set__spawnedCellsPerPrefabDictionary)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*  _spawnedCellsPerPrefabDictionary;

 __declspec(property(get=get_dataSource)) ::GlobalNamespace::__GridView__IDataSource*  dataSource;

 __declspec(property(get=get_cellsEnumerator, put=set_cellsEnumerator)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator*  cellsEnumerator;

 __declspec(property(get=get_rowCount)) int32_t  rowCount;

 __declspec(property(get=get_columnCount)) int32_t  columnCount;

constexpr void __set__contentTransform(::UnityEngine::RectTransform*  value) ;

constexpr ::UnityEngine::RectTransform* __get__contentTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> __get__contentTransform() const;

constexpr void __set__cellsEnumerator_k__BackingField(::GlobalNamespace::__GridView__GridViewCellsEnumerator*  value) ;

constexpr ::GlobalNamespace::__GridView__GridViewCellsEnumerator* __get__cellsEnumerator_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__GridViewCellsEnumerator*> __get__cellsEnumerator_k__BackingField() const;

constexpr void __set__dataSource(::GlobalNamespace::__GridView__IDataSource*  value) ;

constexpr ::GlobalNamespace::__GridView__IDataSource* __get__dataSource() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__IDataSource*> __get__dataSource() const;

constexpr void __set__columnCount(int32_t  value) ;

constexpr int32_t& __get__columnCount() ;

constexpr int32_t const& __get__columnCount() const;

constexpr void __set__rowCount(int32_t  value) ;

constexpr int32_t& __get__rowCount() ;

constexpr int32_t const& __get__rowCount() const;

constexpr void __set__availableCellsPerPrefabDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>* __get__availableCellsPerPrefabDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::Queue_1<::UnityEngine::MonoBehaviour*>*>*> __get__availableCellsPerPrefabDictionary() const;

constexpr void __set__spawnedCellsPerPrefabDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>* __get__spawnedCellsPerPrefabDictionary() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::MonoBehaviour*,::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>*>*> __get__spawnedCellsPerPrefabDictionary() const;

/// @brief Method get_dataSource addr 0x22e29dc size 0x8 virtual false final false
inline ::GlobalNamespace::__GridView__IDataSource* get_dataSource() ;

/// @brief Method get_cellsEnumerator addr 0x22e29e4 size 0x8 virtual false final false
inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator* get_cellsEnumerator() ;

/// @brief Method set_cellsEnumerator addr 0x22e29ec size 0x8 virtual false final false
inline void set_cellsEnumerator(::GlobalNamespace::__GridView__GridViewCellsEnumerator*  value) ;

/// @brief Method get_rowCount addr 0x22e29f4 size 0x8 virtual false final false
inline int32_t get_rowCount() ;

/// @brief Method get_columnCount addr 0x22e29fc size 0x8 virtual false final false
inline int32_t get_columnCount() ;

/// @brief Method SetDataSource addr 0x22dc8d8 size 0x98 virtual false final false
inline void SetDataSource(::GlobalNamespace::__GridView__IDataSource*  newDataSource, bool  reloadData) ;

/// @brief Method ReloadData addr 0x22ddec8 size 0x774 virtual false final false
inline void ReloadData() ;

/// @brief Method GetActiveCellsForIdentifier addr 0x22dcf34 size 0xe8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::MonoBehaviour*>* GetActiveCellsForIdentifier(::UnityEngine::MonoBehaviour*  prefab) ;

/// @brief Method GetReusableCellView addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline T GetReusableCellView(::UnityEngine::MonoBehaviour*  prefab) ;

static inline ::GlobalNamespace::GridView* New_ctor() ;

/// @brief Method .ctor addr 0x22e2a2c size 0xc0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GridView(GridView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridView(GridView const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GridView()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GridView, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GridView*, "", "GridView");
NEED_NO_BOX(::GlobalNamespace::__GridView__GridViewCellsEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__GridViewCellsEnumerator*, "", "GridView/GridViewCellsEnumerator");
NEED_NO_BOX(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1*, "", "GridView/GridViewCellsEnumerator/<GetEnumerator>d__1");
NEED_NO_BOX(::GlobalNamespace::__GridView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__IDataSource*, "", "GridView/IDataSource");
