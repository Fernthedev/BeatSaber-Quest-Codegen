#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GlobalLinkedListNodeCache_1)
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class LinkedListNodeCache_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
template<typename T>
class GlobalLinkedListNodeCache_1;
}
namespace UnityEngine::ResourceManagement::Util {
template<::il2cpp_utils::il2cpp_reference_type T>
class GlobalLinkedListNodeCache_1<T>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1);
// Type: UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1
// Type: UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1
namespace UnityEngine::ResourceManagement::Util {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13982), inst: 2 })
// CS Name: ::UnityEngine.ResourceManagement.Util::GlobalLinkedListNodeCache`1<T>*
class CORDL_TYPE GlobalLinkedListNodeCache_1<T> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_m_globalCache(::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>*  value) ;

static inline ::UnityEngine::ResourceManagement::Util::LinkedListNodeCache_1<T>* getStaticF_m_globalCache() ;

/// @brief Method Acquire addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Collections::Generic::LinkedListNode_1<T>* Acquire(T  val) ;

/// @brief Method Release addr 0x0 size 0xffffffffffffffff virtual false final false
static inline void Release(::System::Collections::Generic::LinkedListNode_1<T>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GlobalLinkedListNodeCache_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GlobalLinkedListNodeCache_1(GlobalLinkedListNodeCache_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 GlobalLinkedListNodeCache_1()  = default;
public:


// Fields

// Static field m_globalCache


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::ResourceManagement::Util::GlobalLinkedListNodeCache_1, "UnityEngine.ResourceManagement.Util", "GlobalLinkedListNodeCache`1");
