#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationEventHandler)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationEventHandler);
// Type: System.Runtime.Serialization::SerializationEventHandler
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3201))
// CS Name: ::System.Runtime.Serialization::SerializationEventHandler*
class CORDL_TYPE SerializationEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Runtime::Serialization::SerializationEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x24b49b8 size 0xc4 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x24b4a7c size 0x14 virtual true final false
inline void Invoke(::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationEventHandler(SerializationEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationEventHandler(SerializationEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationEventHandler*, "System.Runtime.Serialization", "SerializationEventHandler");
