#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ApplicationVersion)
// Forward declare root types
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::ApplicationVersion);
// Type: Oculus.Platform.Models::ApplicationVersion
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13416))
// CS Name: ::Oculus.Platform.Models::ApplicationVersion*
class CORDL_TYPE ApplicationVersion : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::System::Object)]{};

/// @brief Field CurrentCode offset 0x10
 __declspec(property(get=__get_CurrentCode, put=__set_CurrentCode)) int32_t  CurrentCode;

/// @brief Field CurrentName offset 0x18
 __declspec(property(get=__get_CurrentName, put=__set_CurrentName)) ::StringW  CurrentName;

/// @brief Field LatestCode offset 0x20
 __declspec(property(get=__get_LatestCode, put=__set_LatestCode)) int32_t  LatestCode;

/// @brief Field LatestName offset 0x28
 __declspec(property(get=__get_LatestName, put=__set_LatestName)) ::StringW  LatestName;

/// @brief Field ReleaseDate offset 0x30
 __declspec(property(get=__get_ReleaseDate, put=__set_ReleaseDate)) int64_t  ReleaseDate;

/// @brief Field Size offset 0x38
 __declspec(property(get=__get_Size, put=__set_Size)) ::StringW  Size;

constexpr void __set_CurrentCode(int32_t  value) ;

constexpr int32_t& __get_CurrentCode() ;

constexpr int32_t const& __get_CurrentCode() const;

constexpr void __set_CurrentName(::StringW  value) ;

constexpr ::StringW& __get_CurrentName() ;

constexpr ::StringW const& __get_CurrentName() const;

constexpr void __set_LatestCode(int32_t  value) ;

constexpr int32_t& __get_LatestCode() ;

constexpr int32_t const& __get_LatestCode() const;

constexpr void __set_LatestName(::StringW  value) ;

constexpr ::StringW& __get_LatestName() ;

constexpr ::StringW const& __get_LatestName() const;

constexpr void __set_ReleaseDate(int64_t  value) ;

constexpr int64_t& __get_ReleaseDate() ;

constexpr int64_t const& __get_ReleaseDate() const;

constexpr void __set_Size(::StringW  value) ;

constexpr ::StringW& __get_Size() ;

constexpr ::StringW const& __get_Size() const;

static inline ::Oculus::Platform::Models::ApplicationVersion* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x27044c0 size 0xc8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplicationVersion(ApplicationVersion && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationVersion", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplicationVersion(ApplicationVersion const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ApplicationVersion()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::ApplicationVersion, 0x40>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::ApplicationVersion);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::ApplicationVersion*, "Oculus.Platform.Models", "ApplicationVersion");
