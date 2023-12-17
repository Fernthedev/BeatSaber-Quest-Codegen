#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder_def.hpp"
CORDL_MODULE_EXPORT(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder)
namespace Zenject {
class DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder;
}
namespace Zenject {
class SignalDeclarationBindInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
// Type: Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10652))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10651))
// CS Name: ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*
class CORDL_TYPE DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder : public ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder)]{};

static inline ::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder* New_ctor(::Zenject::SignalDeclarationBindInfo*  signalBindInfo) ;

/// @brief Method .ctor addr 0x2ec2344 size 0x24 virtual false final false
inline void _ctor(::Zenject::SignalDeclarationBindInfo*  signalBindInfo) ;

/// @brief Method WithId addr 0x2ec238c size 0x1c virtual false final false
inline ::Zenject::DeclareSignalRequireHandlerAsyncTickPriorityCopyBinder* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder(DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder, 0x20>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder*, "Zenject", "DeclareSignalIdRequireHandlerAsyncTickPriorityCopyBinder");
