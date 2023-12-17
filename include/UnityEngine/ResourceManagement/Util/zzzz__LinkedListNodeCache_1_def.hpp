#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedListNodeCache_1)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class LinkedListNodeCache_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<::il2cpp_utils::il2cpp_reference_type T>
class LinkedListNodeCache_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1);
// Type: UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1
// Type: UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13981)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13981), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement.Util::LinkedListNodeCache`1<T>*
class CORDL_TYPE LinkedListNodeCache_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field m_NodesCreated offset 0x10
 __declspec(property(get=__get_m_NodesCreated, put=__set_m_NodesCreated)) int32_t  m_NodesCreated;

/// @brief Field m_NodeCache offset 0x18
 __declspec(property(get=__get_m_NodeCache, put=__set_m_NodeCache)) ::System::Collections::Generic::LinkedList_1<T>*  m_NodeCache;

 __declspec(property(get=get_CreatedNodeCount)) int32_t  CreatedNodeCount;

 __declspec(property(get=get_CachedNodeCount)) int32_t  CachedNodeCount;

constexpr void __set_m_NodesCreated(int32_t  value) ;

constexpr int32_t& __get_m_NodesCreated() ;

constexpr int32_t const& __get_m_NodesCreated() const;

constexpr void __set_m_NodeCache(::System::Collections::Generic::LinkedList_1<T>*  value) ;

constexpr ::System::Collections::Generic::LinkedList_1<T>* __get_m_NodeCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<T>*> __get_m_NodeCache() const;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T  val) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
inline void Release(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

/// @brief Method get_CreatedNodeCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_CreatedNodeCount() ;

/// @brief Method get_CachedNodeCount addr 0x0 size 0xffffffffffffffff virtual false final false
inline int32_t get_CachedNodeCount() ;

static inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LinkedListNodeCache_1(LinkedListNodeCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LinkedListNodeCache_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LinkedListNodeCache_1(LinkedListNodeCache_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LinkedListNodeCache_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "LinkedListNodeCache`1");
