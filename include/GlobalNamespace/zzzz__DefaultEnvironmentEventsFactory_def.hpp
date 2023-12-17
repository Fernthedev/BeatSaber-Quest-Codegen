#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultEnvironmentEventsFactory)
namespace GlobalNamespace {
class BeatmapEventDataBoxGroupLists;
}
namespace GlobalNamespace {
class DefaultEnvironmentEvents;
}
namespace GlobalNamespace {
class BeatmapData;
}
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
// Forward declare root types
namespace GlobalNamespace {
class DefaultEnvironmentEventsFactory;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DefaultEnvironmentEventsFactory);
// Type: ::DefaultEnvironmentEventsFactory
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4298))
// CS Name: ::DefaultEnvironmentEventsFactory*
class CORDL_TYPE DefaultEnvironmentEventsFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method InsertDefaultEnvironmentEvents addr 0x2333894 size 0x348 virtual false final false
static inline void InsertDefaultEnvironmentEvents(::GlobalNamespace::BeatmapData*  beatmapData, ::GlobalNamespace::BeatmapEventDataBoxGroupLists*  beatmapEventDataBoxGroupLists, ::GlobalNamespace::DefaultEnvironmentEvents*  defaultEnvironmentEvents, ::GlobalNamespace::IEnvironmentLightGroups*  environmentLightGroups) ;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultEnvironmentEventsFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultEnvironmentEventsFactory(DefaultEnvironmentEventsFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultEnvironmentEventsFactory()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DefaultEnvironmentEventsFactory, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DefaultEnvironmentEventsFactory);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DefaultEnvironmentEventsFactory*, "", "DefaultEnvironmentEventsFactory");
