#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationErrorCallback)
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationErrorCallback;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationErrorCallback);
// Type: Newtonsoft.Json.Serialization::SerializationErrorCallback
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11938))
// CS Name: ::Newtonsoft.Json.Serialization::SerializationErrorCallback*
class CORDL_TYPE SerializationErrorCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x2678298 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x26783c8 size 0x14 virtual true final false
inline void Invoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext) ;

/// @brief Method BeginInvoke addr 0x26783dc size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x2678474 size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationErrorCallback(SerializationErrorCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationErrorCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationErrorCallback(SerializationErrorCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationErrorCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationErrorCallback, 0x80>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationErrorCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationErrorCallback*, "Newtonsoft.Json.Serialization", "SerializationErrorCallback");
