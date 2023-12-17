#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_ObjectPool_1)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
// Forward declare root types
namespace TMPro {
template<typename T>
class TMP_ObjectPool_1;
}
namespace TMPro {
template<::il2cpp_utils::il2cpp_reference_type T>
class TMP_ObjectPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::TMPro::TMP_ObjectPool_1);
// Type: TMPro::TMP_ObjectPool`1
// Type: TMPro::TMP_ObjectPool`1
namespace TMPro {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12406)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12406), inst: 2 })
// CS Name: ::TMPro::TMP_ObjectPool`1<T>*
class CORDL_TYPE TMP_ObjectPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field m_Stack offset 0x10
 __declspec(property(get=__get_m_Stack, put=__set_m_Stack)) ::System::Collections::Generic::Stack_1<T>*  m_Stack;

/// @brief Field m_ActionOnGet offset 0x18
 __declspec(property(get=__get_m_ActionOnGet, put=__set_m_ActionOnGet)) ::UnityEngine::Events::UnityAction_1<T>*  m_ActionOnGet;

/// @brief Field m_ActionOnRelease offset 0x20
 __declspec(property(get=__get_m_ActionOnRelease, put=__set_m_ActionOnRelease)) ::UnityEngine::Events::UnityAction_1<T>*  m_ActionOnRelease;

/// @brief Field <countAll>k__BackingField offset 0x28
 __declspec(property(get=__get__countAll_k__BackingField, put=__set__countAll_k__BackingField)) int32_t  _countAll_k__BackingField;

 __declspec(property(get=get_countAll, put=set_countAll)) int32_t  countAll;

 __declspec(property(get=get_countActive)) int32_t  countActive;

 __declspec(property(get=get_countInactive)) int32_t  countInactive;

constexpr void __set_m_Stack(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<T>* __get_m_Stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> __get_m_Stack() const;

constexpr void __set_m_ActionOnGet(::UnityEngine::Events::UnityAction_1<T>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<T>* __get_m_ActionOnGet() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> __get_m_ActionOnGet() const;

constexpr void __set_m_ActionOnRelease(::UnityEngine::Events::UnityAction_1<T>*  value) ;

constexpr ::UnityEngine::Events::UnityAction_1<T>* __get_m_ActionOnRelease() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Events::UnityAction_1<T>*> __get_m_ActionOnRelease() const;

constexpr void __set__countAll_k__BackingField(int32_t  value) ;

constexpr int32_t& __get__countAll_k__BackingField() ;

constexpr int32_t const& __get__countAll_k__BackingField() const;

/// @brief Method get_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_countAll() ;

/// @brief Method set_countAll addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_countAll(int32_t  value) ;

/// @brief Method get_countActive addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_countActive() ;

/// @brief Method get_countInactive addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_countInactive() ;

static inline ::TMPro::TMP_ObjectPool_1<T>* New_ctor(::UnityEngine::Events::UnityAction_1<T>*  actionOnGet, ::UnityEngine::Events::UnityAction_1<T>*  actionOnRelease) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::UnityEngine::Events::UnityAction_1<T>*  actionOnGet, ::UnityEngine::Events::UnityAction_1<T>*  actionOnRelease) ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release(T  element) ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_ObjectPool_1(TMP_ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_ObjectPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_ObjectPool_1(TMP_ObjectPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_ObjectPool_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::TMP_ObjectPool_1, "TMPro", "TMP_ObjectPool`1");
