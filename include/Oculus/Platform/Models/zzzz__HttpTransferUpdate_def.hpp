#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpTransferUpdate)
// Forward declare root types
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::HttpTransferUpdate);
// Type: Oculus.Platform.Models::HttpTransferUpdate
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13436))
// CS Name: ::Oculus.Platform.Models::HttpTransferUpdate*
class CORDL_TYPE HttpTransferUpdate : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field ID offset 0x10
 __declspec(property(get=__get__cordl_ID, put=__set__cordl_ID)) uint64_t  _cordl_ID;

/// @brief Field Payload offset 0x18
 __declspec(property(get=__get_Payload, put=__set_Payload)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Payload;

/// @brief Field IsCompleted offset 0x20
 __declspec(property(get=__get_IsCompleted, put=__set_IsCompleted)) bool  IsCompleted;

constexpr void __set__cordl_ID(uint64_t  value) ;

constexpr uint64_t& __get__cordl_ID() ;

constexpr uint64_t const& __get__cordl_ID() const;

constexpr void __set_Payload(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_Payload() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_Payload() const;

constexpr void __set_IsCompleted(bool  value) ;

constexpr bool& __get_IsCompleted() ;

constexpr bool const& __get_IsCompleted() const;

static inline ::Oculus::Platform::Models::HttpTransferUpdate* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2705f3c size 0x158 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpTransferUpdate(HttpTransferUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpTransferUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpTransferUpdate(HttpTransferUpdate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HttpTransferUpdate()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::HttpTransferUpdate, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::HttpTransferUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::HttpTransferUpdate*, "Oculus.Platform.Models", "HttpTransferUpdate");
