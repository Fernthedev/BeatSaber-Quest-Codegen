#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationCallback)
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class SerializationCallback;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::SerializationCallback);
// Type: Newtonsoft.Json.Serialization::SerializationCallback
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11937))
// CS Name: ::Newtonsoft.Json.Serialization::SerializationCallback*
class CORDL_TYPE SerializationCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::Newtonsoft::Json::Serialization::SerializationCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x26780b4 size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x26781e4 size 0x14 virtual true final false
inline void Invoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method BeginInvoke addr 0x26781f8 size 0x94 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x267828c size 0xc virtual true final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationCallback(SerializationCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationCallback(SerializationCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SerializationCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::SerializationCallback, 0x80>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::SerializationCallback);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::SerializationCallback*, "Newtonsoft.Json.Serialization", "SerializationCallback");
