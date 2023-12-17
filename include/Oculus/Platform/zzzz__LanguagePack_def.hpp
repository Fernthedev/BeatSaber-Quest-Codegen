#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LanguagePack)
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
// Forward declare root types
namespace Oculus::Platform {
class LanguagePack;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::LanguagePack);
// Type: Oculus.Platform::LanguagePack
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13363))
// CS Name: ::Oculus.Platform::LanguagePack*
class CORDL_TYPE LanguagePack : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetCurrent addr 0x26fe808 size 0x158 virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetDetails*>* GetCurrent() ;

/// @brief Method SetCurrent addr 0x26fe960 size 0x160 virtual false final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AssetFileDownloadResult*>* SetCurrent(::StringW  tag) ;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LanguagePack(LanguagePack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LanguagePack", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LanguagePack(LanguagePack const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LanguagePack()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::LanguagePack, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::LanguagePack);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::LanguagePack*, "Oculus.Platform", "LanguagePack");
