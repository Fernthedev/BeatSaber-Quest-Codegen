#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MethodReturnDictionary)
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodReturnDictionary;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::MethodReturnDictionary);
// Type: System.Runtime.Remoting.Messaging::MethodReturnDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3177))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3179))
// CS Name: ::System.Runtime.Remoting.Messaging::MethodReturnDictionary*
class CORDL_TYPE MethodReturnDictionary : public ::System::Runtime::Remoting::Messaging::MessageDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Runtime::Remoting::Messaging::MessageDictionary)]{};

static inline void setStaticF_InternalReturnKeys(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_InternalReturnKeys() ;

static inline void setStaticF_InternalExceptionKeys(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_InternalExceptionKeys() ;

static inline ::System::Runtime::Remoting::Messaging::MethodReturnDictionary* New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*  message) ;

/// @brief Method .ctor addr 0x24b07c4 size 0xfc virtual false final false
inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*  message) ;

// Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodReturnDictionary(MethodReturnDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodReturnDictionary(MethodReturnDictionary const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MethodReturnDictionary()  = default;
public:


// Fields

// Static field InternalReturnKeys

// Static field InternalExceptionKeys


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::MethodReturnDictionary, 0x30>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::MethodReturnDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::MethodReturnDictionary*, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
