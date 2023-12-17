#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeWalkPredicate_1)
namespace System::Collections::Generic {
template<typename T>
class __SortedSet_1__Node;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class TreeWalkPredicate_1;
}
namespace System::Collections::Generic {
template<::il2cpp_utils::il2cpp_reference_type T>
class TreeWalkPredicate_1<T>;
}
namespace System::Collections::Generic {
template<>
class TreeWalkPredicate_1<uint32_t>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::TreeWalkPredicate_1);
// Type: System.Collections.Generic::TreeWalkPredicate`1
// Type: System.Collections.Generic::TreeWalkPredicate`1
namespace System::Collections::Generic {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9543)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9543), inst: 753 })
// CS Name: ::System.Collections.Generic::TreeWalkPredicate`1<T>*
class CORDL_TYPE TreeWalkPredicate_1<uint32_t> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Collections::Generic::TreeWalkPredicate_1<uint32_t>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Collections::Generic::__SortedSet_1__Node<uint32_t>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeWalkPredicate_1(TreeWalkPredicate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeWalkPredicate_1(TreeWalkPredicate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TreeWalkPredicate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
// Type: System.Collections.Generic::TreeWalkPredicate`1
namespace System::Collections::Generic {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9543)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9543), inst: 2 })
// CS Name: ::System.Collections.Generic::TreeWalkPredicate`1<T>*
class CORDL_TYPE TreeWalkPredicate_1<T> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Collections::Generic::TreeWalkPredicate_1<T>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline bool Invoke(::System::Collections::Generic::__SortedSet_1__Node<T>*  node) ;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeWalkPredicate_1(TreeWalkPredicate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeWalkPredicate_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeWalkPredicate_1(TreeWalkPredicate_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TreeWalkPredicate_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::TreeWalkPredicate_1, "System.Collections.Generic", "TreeWalkPredicate`1");
