#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectPool_1)
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type T>
class ObjectPool_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::ObjectPool_1);
// Type: UnityEngine.UIElements::ObjectPool`1
// Type: UnityEngine.UIElements::ObjectPool`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6745))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6745), inst: 2 })
// CS Name: ::UnityEngine.UIElements::ObjectPool`1<T>*
class CORDL_TYPE ObjectPool_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_Stack offset 0x10
 __declspec(property(get=__get_m_Stack, put=__set_m_Stack)) ::System::Collections::Generic::Stack_1<T>*  m_Stack;

/// @brief Field m_MaxSize offset 0x18
 __declspec(property(get=__get_m_MaxSize, put=__set_m_MaxSize)) int32_t  m_MaxSize;

 __declspec(property(get=get_maxSize, put=set_maxSize)) int32_t  maxSize;

constexpr void __set_m_Stack(::System::Collections::Generic::Stack_1<T>*  value) ;

constexpr ::System::Collections::Generic::Stack_1<T>* __get_m_Stack() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<T>*> __get_m_Stack() const;

constexpr void __set_m_MaxSize(int32_t  value) ;

constexpr int32_t& __get_m_MaxSize() ;

constexpr int32_t const& __get_m_MaxSize() const;

/// @brief Method get_maxSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_maxSize() ;

/// @brief Method set_maxSize addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_maxSize(int32_t  value) ;

static inline ::UnityEngine::UIElements::ObjectPool_1<T>* New_ctor(int32_t  maxSize) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(int32_t  maxSize) ;

/// @brief Method Size addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t Size() ;

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
inline T Get() ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release(T  element) ;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPool_1(ObjectPool_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPool_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPool_1(ObjectPool_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObjectPool_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::ObjectPool_1, "UnityEngine.UIElements", "ObjectPool`1");
