#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRDriverManager)
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRDriverManager;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRDriverManager;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRDriverManager);
// Type: OVR.OpenVR::CVRDriverManager
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8575))
// CS Name: ::OVR.OpenVR::CVRDriverManager*
class CORDL_TYPE CVRDriverManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field FnTable offset 0x10
 __declspec(property(get=__get_FnTable, put=__set_FnTable)) ::OVR::OpenVR::IVRDriverManager  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRDriverManager  value) ;

constexpr ::OVR::OpenVR::IVRDriverManager& __get_FnTable() ;

constexpr ::OVR::OpenVR::IVRDriverManager const& __get_FnTable() const;

static inline ::OVR::OpenVR::CVRDriverManager* New_ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method .ctor addr 0x27f58f0 size 0x114 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method GetDriverCount addr 0x27f5a04 size 0x24 virtual false final false
inline uint32_t GetDriverCount() ;

/// @brief Method GetDriverName addr 0x27f5a28 size 0x24 virtual false final false
inline uint32_t GetDriverName(uint32_t  nDriver, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize) ;

/// @brief Method GetDriverHandle addr 0x27f5a4c size 0x24 virtual false final false
inline uint64_t GetDriverHandle(::StringW  pchDriverName) ;

// Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRDriverManager(CVRDriverManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRDriverManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRDriverManager(CVRDriverManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CVRDriverManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRDriverManager, 0x28>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRDriverManager);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRDriverManager*, "OVR.OpenVR", "CVRDriverManager");
