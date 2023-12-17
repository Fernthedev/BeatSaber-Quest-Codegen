#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRExtendedDisplay)
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct IVRExtendedDisplay;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRExtendedDisplay;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRExtendedDisplay);
// Type: OVR.OpenVR::CVRExtendedDisplay
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8559))
// CS Name: ::OVR.OpenVR::CVRExtendedDisplay*
class CORDL_TYPE CVRExtendedDisplay : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field FnTable offset 0x10
 __declspec(property(get=__get_FnTable, put=__set_FnTable)) ::OVR::OpenVR::IVRExtendedDisplay  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRExtendedDisplay  value) ;

constexpr ::OVR::OpenVR::IVRExtendedDisplay& __get_FnTable() ;

constexpr ::OVR::OpenVR::IVRExtendedDisplay const& __get_FnTable() const;

static inline ::OVR::OpenVR::CVRExtendedDisplay* New_ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method .ctor addr 0x27f1dd8 size 0x114 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method GetWindowBounds addr 0x27f1eec size 0x34 virtual false final false
inline void GetWindowBounds(ByRef<int32_t>  pnX, ByRef<int32_t>  pnY, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight) ;

/// @brief Method GetEyeOutputViewport addr 0x27f1f20 size 0x34 virtual false final false
inline void GetEyeOutputViewport(::OVR::OpenVR::EVREye  eEye, ByRef<uint32_t>  pnX, ByRef<uint32_t>  pnY, ByRef<uint32_t>  pnWidth, ByRef<uint32_t>  pnHeight) ;

/// @brief Method GetDXGIOutputInfo addr 0x27f1f54 size 0x2c virtual false final false
inline void GetDXGIOutputInfo(ByRef<int32_t>  pnAdapterIndex, ByRef<int32_t>  pnAdapterOutputIndex) ;

// Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRExtendedDisplay(CVRExtendedDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRExtendedDisplay", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRExtendedDisplay(CVRExtendedDisplay const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CVRExtendedDisplay()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRExtendedDisplay, 0x28>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRExtendedDisplay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRExtendedDisplay*, "OVR.OpenVR", "CVRExtendedDisplay");
