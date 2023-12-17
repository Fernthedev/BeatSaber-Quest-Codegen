#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusAnalyticsModel)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusAnalyticsModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusAnalyticsModel);
// Type: ::OculusAnalyticsModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16223))
// CS Name: ::OculusAnalyticsModel*
class CORDL_TYPE OculusAnalyticsModel : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

 __declspec(property(get=get_supportsOpenDataPrivacyPage)) bool  supportsOpenDataPrivacyPage;

/// @brief Convert operator to "::GlobalNamespace::IAnalyticsModel"
constexpr operator  ::GlobalNamespace::IAnalyticsModel*() noexcept;

/// @brief Method get_supportsOpenDataPrivacyPage addr 0xdfcb6c size 0x8 virtual true final true
inline bool get_supportsOpenDataPrivacyPage() ;

/// @brief Method OpenDataPrivacyPage addr 0xdfcb74 size 0x4 virtual true final true
inline void OpenDataPrivacyPage() ;

/// @brief Method LogEvent addr 0xdfcb78 size 0xf8 virtual true final true
inline void LogEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogEditAvatarEvent addr 0xdfcc70 size 0xf8 virtual true final true
inline void LogEditAvatarEvent(::StringW  eventType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  eventData) ;

/// @brief Method LogClick addr 0xdfcd68 size 0x90 virtual true final true
inline void LogClick(::StringW  clickType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  clickData) ;

/// @brief Method LogImpression addr 0xdfcdf8 size 0x90 virtual true final true
inline void LogImpression(::StringW  impressionType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  impressionData) ;

/// @brief Method LogExposure addr 0xdfce88 size 0x90 virtual true final true
inline void LogExposure(::StringW  exposureType, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  exposureData) ;

static inline ::GlobalNamespace::OculusAnalyticsModel* New_ctor() ;

/// @brief Method .ctor addr 0xdfcf18 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OculusAnalyticsModel(OculusAnalyticsModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OculusAnalyticsModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OculusAnalyticsModel(OculusAnalyticsModel const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OculusAnalyticsModel()  = default;
public:


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusAnalyticsModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusAnalyticsModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusAnalyticsModel*, "", "OculusAnalyticsModel");
