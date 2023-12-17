#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IProducerConsumerCollectionDebugView_1)
// Forward declare root types
namespace System::Collections::Concurrent {
template<typename T>
class IProducerConsumerCollectionDebugView_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1);
// Type: System.Collections.Concurrent::IProducerConsumerCollectionDebugView`1
namespace System::Collections::Concurrent {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3813))
// CS Name: ::System.Collections.Concurrent::IProducerConsumerCollectionDebugView`1<T>*
class CORDL_TYPE IProducerConsumerCollectionDebugView_1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollectionDebugView_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IProducerConsumerCollectionDebugView_1(IProducerConsumerCollectionDebugView_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IProducerConsumerCollectionDebugView_1()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IProducerConsumerCollectionDebugView_1, "System.Collections.Concurrent", "IProducerConsumerCollectionDebugView`1");
