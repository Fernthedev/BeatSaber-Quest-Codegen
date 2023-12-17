#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstalledApplication)
// Forward declare root types
namespace Oculus::Platform::Models {
class InstalledApplication;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::InstalledApplication);
// Type: Oculus.Platform.Models::InstalledApplication
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13437))
// CS Name: ::Oculus.Platform.Models::InstalledApplication*
class CORDL_TYPE InstalledApplication : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field ApplicationId offset 0x10
 __declspec(property(get=__get_ApplicationId, put=__set_ApplicationId)) ::StringW  ApplicationId;

/// @brief Field PackageName offset 0x18
 __declspec(property(get=__get_PackageName, put=__set_PackageName)) ::StringW  PackageName;

/// @brief Field Status offset 0x20
 __declspec(property(get=__get_Status, put=__set_Status)) ::StringW  Status;

/// @brief Field VersionCode offset 0x28
 __declspec(property(get=__get_VersionCode, put=__set_VersionCode)) int32_t  VersionCode;

/// @brief Field VersionName offset 0x30
 __declspec(property(get=__get_VersionName, put=__set_VersionName)) ::StringW  VersionName;

constexpr void __set_ApplicationId(::StringW  value) ;

constexpr ::StringW& __get_ApplicationId() ;

constexpr ::StringW const& __get_ApplicationId() const;

constexpr void __set_PackageName(::StringW  value) ;

constexpr ::StringW& __get_PackageName() ;

constexpr ::StringW const& __get_PackageName() const;

constexpr void __set_Status(::StringW  value) ;

constexpr ::StringW& __get_Status() ;

constexpr ::StringW const& __get_Status() const;

constexpr void __set_VersionCode(int32_t  value) ;

constexpr int32_t& __get_VersionCode() ;

constexpr int32_t const& __get_VersionCode() const;

constexpr void __set_VersionName(::StringW  value) ;

constexpr ::StringW& __get_VersionName() ;

constexpr ::StringW const& __get_VersionName() const;

static inline ::Oculus::Platform::Models::InstalledApplication* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2706094 size 0xb8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstalledApplication(InstalledApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstalledApplication", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstalledApplication(InstalledApplication const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InstalledApplication()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::InstalledApplication, 0x38>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::InstalledApplication);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::InstalledApplication*, "Oculus.Platform.Models", "InstalledApplication");
