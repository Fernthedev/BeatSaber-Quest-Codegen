#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SonyPublishingHelper)
namespace GlobalNamespace {
class SonyPublisherSKUSettingsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyPublishingHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyPublishingHelper);
// Type: ::SonyPublishingHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4603))
// CS Name: ::SonyPublishingHelper*
class CORDL_TYPE SonyPublishingHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetServiceId addr 0x2369da4 size 0x28 virtual false final false
static inline ::StringW GetServiceId(::GlobalNamespace::SonyPublisherSKUSettingsSO*  sonyPublisherSKUSettings) ;

/// @brief Method GetContentId addr 0x2369dec size 0x20 virtual false final false
static inline ::StringW GetContentId(::GlobalNamespace::SonyPublisherSKUSettingsSO*  sonyPublisherSKUSettings) ;

/// @brief Method GetContentId addr 0x2369e40 size 0x5c virtual false final false
static inline ::StringW GetContentId(::StringW  serviceId, ::StringW  productLabel) ;

/// @brief Method GetContentIdFromTitleId addr 0x2369e0c size 0x34 virtual false final false
static inline ::StringW GetContentIdFromTitleId(::StringW  serviceIdPrefix, ::StringW  titleId, ::StringW  productLabel) ;

/// @brief Method GetContentIdFromNpTitleId addr 0x2369e9c size 0x18 virtual false final false
static inline ::StringW GetContentIdFromNpTitleId(::StringW  serviceIdPrefix, ::StringW  npTitleId, ::StringW  productLabel) ;

/// @brief Method GetNpTitleId addr 0x2369f10 size 0x4c virtual false final false
static inline ::StringW GetNpTitleId(::StringW  titleId) ;

/// @brief Method GetServiceIdFromTitleId addr 0x2369dcc size 0x20 virtual false final false
static inline ::StringW GetServiceIdFromTitleId(::StringW  serviceIdPrefix, ::StringW  titleId) ;

/// @brief Method GetServiceIdFromNpTitleId addr 0x2369eb4 size 0x5c virtual false final false
static inline ::StringW GetServiceIdFromNpTitleId(::StringW  serviceIdPrefix, ::StringW  npTitleId) ;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SonyPublishingHelper(SonyPublishingHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SonyPublishingHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SonyPublishingHelper(SonyPublishingHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SonyPublishingHelper()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyPublishingHelper, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyPublishingHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyPublishingHelper*, "", "SonyPublishingHelper");
