#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConnectionFailedException)
namespace GlobalNamespace {
struct ConnectionFailedReason;
}
// Forward declare root types
namespace GlobalNamespace {
class ConnectionFailedException;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConnectionFailedException);
// Type: ::ConnectionFailedException
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12707))
// CS Name: ::ConnectionFailedException*
class CORDL_TYPE ConnectionFailedException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

/// @brief Field reason offset 0x8c
 __declspec(property(get=__get_reason, put=__set_reason)) ::GlobalNamespace::ConnectionFailedReason  reason;

constexpr void __set_reason(::GlobalNamespace::ConnectionFailedReason  value) ;

constexpr ::GlobalNamespace::ConnectionFailedReason& __get_reason() ;

constexpr ::GlobalNamespace::ConnectionFailedReason const& __get_reason() const;

static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason  reason) ;

/// @brief Method .ctor addr 0xe32260 size 0x6c virtual false final false
inline void _ctor(::GlobalNamespace::ConnectionFailedReason  reason) ;

static inline ::GlobalNamespace::ConnectionFailedException* New_ctor(::GlobalNamespace::ConnectionFailedReason  reason, ::StringW  message) ;

/// @brief Method .ctor addr 0xe322cc size 0x74 virtual false final false
inline void _ctor(::GlobalNamespace::ConnectionFailedReason  reason, ::StringW  message) ;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionFailedException(ConnectionFailedException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionFailedException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionFailedException(ConnectionFailedException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConnectionFailedException()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConnectionFailedException, 0x90>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConnectionFailedException);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConnectionFailedException*, "", "ConnectionFailedException");
