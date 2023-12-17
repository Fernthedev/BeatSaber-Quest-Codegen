#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IServerBeatmapProviderManager)
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class IServerBeatmapProvider;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class IServerBeatmapProviderManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IServerBeatmapProviderManager);
// Type: ::IServerBeatmapProviderManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12814))
// CS Name: ::IServerBeatmapProviderManager*
class CORDL_TYPE IServerBeatmapProviderManager {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method GetServerBeatmapProvider addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::GlobalNamespace::IServerBeatmapProvider* GetServerBeatmapProvider() ;

/// @brief Method RefreshAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task* RefreshAsync() ;

// Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProviderManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IServerBeatmapProviderManager(IServerBeatmapProviderManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IServerBeatmapProviderManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IServerBeatmapProviderManager(IServerBeatmapProviderManager const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IServerBeatmapProviderManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IServerBeatmapProviderManager*, "", "IServerBeatmapProviderManager");
