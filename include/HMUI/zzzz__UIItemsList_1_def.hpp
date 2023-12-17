#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UIItemsList_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class DiContainer;
}
namespace HMUI {
template<typename T>
class __UIItemsList_1__DataCallback;
}
namespace UnityEngine {
class Transform;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace HMUI {
template<typename T>
class UIItemsList_1;
}
namespace HMUI {
template<typename T>
class __UIItemsList_1__DataCallback;
}
namespace HMUI {
template<::il2cpp_utils::il2cpp_reference_type T>
class UIItemsList_1<T>;
}
namespace HMUI {
template<::il2cpp_utils::il2cpp_reference_type T>
class __UIItemsList_1__DataCallback<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::HMUI::UIItemsList_1);
MARK_GEN_REF_PTR_T(::HMUI::__UIItemsList_1__DataCallback);
// Type: ::DataCallback
// Type: HMUI::UIItemsList`1
// Type: ::DataCallback
namespace HMUI {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13673)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13673), inst: 2 })
// CS Name: ::UIItemsList`1::DataCallback<T>*
class CORDL_TYPE __UIItemsList_1__DataCallback<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::HMUI::__UIItemsList_1__DataCallback<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(int32_t  idx, T  item) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  idx, T  item, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__UIItemsList_1__DataCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__UIItemsList_1__DataCallback(__UIItemsList_1__DataCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__UIItemsList_1__DataCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__UIItemsList_1__DataCallback(__UIItemsList_1__DataCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __UIItemsList_1__DataCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::UIItemsList`1
namespace HMUI {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(13674))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13674), inst: 2 })
// CS Name: ::HMUI::UIItemsList`1<T>*
class CORDL_TYPE UIItemsList_1<T> : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DataCallback = ::HMUI::__UIItemsList_1__DataCallback<T>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _prefab offset 0x18
 __declspec(property(get=__get__prefab, put=__set__prefab)) T  _prefab;

/// @brief Field _itemsContainer offset 0x20
 __declspec(property(get=__get__itemsContainer, put=__set__itemsContainer)) ::UnityEngine::Transform*  _itemsContainer;

/// @brief Field _insertInTheBeginning offset 0x28
 __declspec(property(get=__get__insertInTheBeginning, put=__set__insertInTheBeginning)) bool  _insertInTheBeginning;

/// @brief Field _container offset 0x30
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _items offset 0x38
 __declspec(property(get=__get__items, put=__set__items)) ::System::Collections::Generic::List_1<T>*  _items;

 __declspec(property(get=get_items)) ::System::Collections::Generic::IEnumerable_1<T>*  items;

constexpr void __set__prefab(T  value) ;

constexpr T& __get__prefab() ;

constexpr T const& __get__prefab() const;

constexpr void __set__itemsContainer(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__itemsContainer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__itemsContainer() const;

constexpr void __set__insertInTheBeginning(bool  value) ;

constexpr bool& __get__insertInTheBeginning() ;

constexpr bool const& __get__insertInTheBeginning() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__items(::System::Collections::Generic::List_1<T>*  value) ;

constexpr ::System::Collections::Generic::List_1<T>* __get__items() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<T>*> __get__items() const;

/// @brief Method get_items addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<T>* get_items() ;

/// @brief Method SetData addr 0x0 size 0xffffffffffffffff virtual false final false
inline void SetData(int32_t  numberOfElements, ::HMUI::__UIItemsList_1__DataCallback<T>*  dataCallback) ;

static inline ::HMUI::UIItemsList_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UIItemsList_1(UIItemsList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIItemsList_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIItemsList_1(UIItemsList_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UIItemsList_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::UIItemsList_1, "HMUI", "UIItemsList`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::HMUI::__UIItemsList_1__DataCallback, "HMUI", "UIItemsList`1/DataCallback");
