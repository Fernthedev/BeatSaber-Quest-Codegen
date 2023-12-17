#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CheckoutException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class CheckoutException;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::CheckoutException);
// Type: System.ComponentModel.Design::CheckoutException
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9496))
// CS Name: ::System.ComponentModel.Design::CheckoutException*
class CORDL_TYPE CheckoutException : public ::System::Runtime::InteropServices::ExternalException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Runtime::InteropServices::ExternalException)]{};

static inline void setStaticF_Canceled(::System::ComponentModel::Design::CheckoutException*  value) ;

static inline ::System::ComponentModel::Design::CheckoutException* getStaticF_Canceled() ;

static inline ::System::ComponentModel::Design::CheckoutException* New_ctor() ;

/// @brief Method .ctor addr 0x293aaec size 0x8 virtual false final false
inline void _ctor() ;

static inline ::System::ComponentModel::Design::CheckoutException* New_ctor(::StringW  message, int32_t  errorCode) ;

/// @brief Method .ctor addr 0x293aaf4 size 0x8 virtual false final false
inline void _ctor(::StringW  message, int32_t  errorCode) ;

static inline ::System::ComponentModel::Design::CheckoutException* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x293aafc size 0x8 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckoutException(CheckoutException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckoutException(CheckoutException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CheckoutException()  = default;
public:


// Fields

// Static field Canceled


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::CheckoutException, 0x90>, "Size mismatch!");

} // namespace end def System::ComponentModel::Design
NEED_NO_BOX(::System::ComponentModel::Design::CheckoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::CheckoutException*, "System.ComponentModel.Design", "CheckoutException");
