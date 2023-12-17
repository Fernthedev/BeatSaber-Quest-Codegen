#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimplePriorityQueue_1)
namespace System {
template<typename T>
class Comparison_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace Priority_Queue {
template<typename TItem>
class SimplePriorityQueue_1;
}
namespace Priority_Queue {
template<::il2cpp_utils::il2cpp_reference_type TItem>
class SimplePriorityQueue_1<TItem>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_1);
// Type: Priority_Queue::SimplePriorityQueue`1
// Type: Priority_Queue::SimplePriorityQueue`1
namespace Priority_Queue {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TItem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6101)), TypeDefinitionIndex(TypeDefinitionIndex(6100)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6100), inst: 3776 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6101), inst: 2 })
// CS Name: ::Priority_Queue::SimplePriorityQueue`1<TItem>*
class CORDL_TYPE SimplePriorityQueue_1<TItem> : public ::Priority_Queue::SimplePriorityQueue_2<TItem,float_t> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Priority_Queue::SimplePriorityQueue_2<TItem,float_t>)]{};

static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Collections::Generic::IComparer_1<float_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Collections::Generic::IComparer_1<float_t>*  comparer) ;

static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Comparison_1<float_t>*  comparer) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Comparison_1<float_t>*  comparer) ;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SimplePriorityQueue_1(SimplePriorityQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimplePriorityQueue_1(SimplePriorityQueue_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SimplePriorityQueue_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_1, "Priority_Queue", "SimplePriorityQueue`1");
