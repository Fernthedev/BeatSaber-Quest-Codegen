#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RpcPool)
namespace GlobalNamespace {
class IRemoteProcedureCall;
}
// Forward declare root types
namespace GlobalNamespace {
class RpcPool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RpcPool);
// Type: ::RpcPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12954))
// CS Name: ::RpcPool*
class CORDL_TYPE RpcPool : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method Obtain addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline T Obtain() ;

/// @brief Method Fill addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static inline void Fill() ;

/// @brief Method Release addr 0xe54494 size 0xfc virtual false final false
static inline void Release(::GlobalNamespace::IRemoteProcedureCall*  t) ;

// Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RpcPool(RpcPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RpcPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RpcPool(RpcPool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RpcPool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RpcPool, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RpcPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RpcPool*, "", "RpcPool");
