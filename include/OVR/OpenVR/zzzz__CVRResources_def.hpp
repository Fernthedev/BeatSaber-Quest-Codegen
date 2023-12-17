#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRResources)
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRResources;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRResources);
// Type: OVR.OpenVR::CVRResources
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8574))
// CS Name: ::OVR.OpenVR::CVRResources*
class CORDL_TYPE CVRResources : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field FnTable offset 0x10
 __declspec(property(get=__get_FnTable, put=__set_FnTable)) ::OVR::OpenVR::IVRResources  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRResources  value) ;

constexpr ::OVR::OpenVR::IVRResources& __get_FnTable() ;

constexpr ::OVR::OpenVR::IVRResources const& __get_FnTable() const;

static inline ::OVR::OpenVR::CVRResources* New_ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method .ctor addr 0x27f579c size 0x10c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method LoadSharedResource addr 0x27f58a8 size 0x24 virtual false final false
inline uint32_t LoadSharedResource(::StringW  pchResourceName, ::StringW  pchBuffer, uint32_t  unBufferLen) ;

/// @brief Method GetResourceFullPath addr 0x27f58cc size 0x24 virtual false final false
inline uint32_t GetResourceFullPath(::StringW  pchResourceName, ::StringW  pchResourceTypeDirectory, ::System::Text::StringBuilder*  pchPathBuffer, uint32_t  unBufferLen) ;

// Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRResources(CVRResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRResources(CVRResources const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CVRResources()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRResources, 0x20>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRResources);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRResources*, "OVR.OpenVR", "CVRResources");
