#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BaseNetworkPlayerModel_def.hpp"
CORDL_MODULE_EXPORT(PlatformNetworkPlayerModel)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class INetworkPlayer;
}
namespace GlobalNamespace {
class __PlatformNetworkPlayerModel__CreatePartyConfig;
}
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformNetworkPlayerModel;
}
namespace GlobalNamespace {
class __PlatformNetworkPlayerModel__CreatePartyConfig;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformNetworkPlayerModel);
MARK_REF_PTR_T(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig);
// Type: ::CreatePartyConfig
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14937))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14972))
// CS Name: ::PlatformNetworkPlayerModel::CreatePartyConfig*
class CORDL_TYPE __PlatformNetworkPlayerModel__CreatePartyConfig : public ::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::__BaseNetworkPlayerModel__PartyConfig)]{};

/// @brief Convert operator to "::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>"
constexpr operator  ::GlobalNamespace::INetworkPlayerModelPartyConfig_1<::GlobalNamespace::PlatformNetworkPlayerModel*>*() noexcept;

static inline ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig* New_ctor() ;

/// @brief Method .ctor addr 0x2638cf0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__PlatformNetworkPlayerModel__CreatePartyConfig(__PlatformNetworkPlayerModel__CreatePartyConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__PlatformNetworkPlayerModel__CreatePartyConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__PlatformNetworkPlayerModel__CreatePartyConfig(__PlatformNetworkPlayerModel__CreatePartyConfig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __PlatformNetworkPlayerModel__CreatePartyConfig()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::PlatformNetworkPlayerModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14940))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14973))
// CS Name: ::PlatformNetworkPlayerModel*
class CORDL_TYPE PlatformNetworkPlayerModel : public ::GlobalNamespace::BaseNetworkPlayerModel {
public:
// Declarations
using CreatePartyConfig = ::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::GlobalNamespace::BaseNetworkPlayerModel)]{};

 __declspec(property(get=get_friends)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>*  friends;

/// @brief Method get_friends addr 0x2638cc8 size 0x10 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::INetworkPlayer*>* get_friends() ;

/// @brief Method DestroyPartyConnection addr 0x2638cd8 size 0x18 virtual true final false
inline void DestroyPartyConnection() ;

static inline ::GlobalNamespace::PlatformNetworkPlayerModel* New_ctor() ;

/// @brief Method .ctor addr 0x2637d84 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformNetworkPlayerModel(PlatformNetworkPlayerModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformNetworkPlayerModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformNetworkPlayerModel(PlatformNetworkPlayerModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformNetworkPlayerModel()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformNetworkPlayerModel, 0xa0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformNetworkPlayerModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformNetworkPlayerModel*, "", "PlatformNetworkPlayerModel");
NEED_NO_BOX(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__PlatformNetworkPlayerModel__CreatePartyConfig*, "", "PlatformNetworkPlayerModel/CreatePartyConfig");
