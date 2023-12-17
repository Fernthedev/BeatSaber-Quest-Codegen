#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CVRIOBuffer)
namespace OVR::OpenVR {
struct IVRIOBuffer;
}
namespace OVR::OpenVR {
struct EIOBufferError;
}
namespace OVR::OpenVR {
struct EIOBufferMode;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRIOBuffer;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRIOBuffer);
// Type: OVR.OpenVR::CVRIOBuffer
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8577))
// CS Name: ::OVR.OpenVR::CVRIOBuffer*
class CORDL_TYPE CVRIOBuffer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field FnTable offset 0x10
 __declspec(property(get=__get_FnTable, put=__set_FnTable)) ::OVR::OpenVR::IVRIOBuffer  FnTable;

constexpr void __set_FnTable(::OVR::OpenVR::IVRIOBuffer  value) ;

constexpr ::OVR::OpenVR::IVRIOBuffer& __get_FnTable() ;

constexpr ::OVR::OpenVR::IVRIOBuffer const& __get_FnTable() const;

static inline ::OVR::OpenVR::CVRIOBuffer* New_ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method .ctor addr 0x27f5e50 size 0x114 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  pInterface) ;

/// @brief Method Open addr 0x27f5f64 size 0x28 virtual false final false
inline ::OVR::OpenVR::EIOBufferError Open(::StringW  pchPath, ::OVR::OpenVR::EIOBufferMode  mode, uint32_t  unElementSize, uint32_t  unElements, ByRef<uint64_t>  pulBuffer) ;

/// @brief Method Close addr 0x27f5f8c size 0x24 virtual false final false
inline ::OVR::OpenVR::EIOBufferError Close(uint64_t  ulBuffer) ;

/// @brief Method Read addr 0x27f5fb0 size 0x28 virtual false final false
inline ::OVR::OpenVR::EIOBufferError Read(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pDst, uint32_t  unBytes, ByRef<uint32_t>  punRead) ;

/// @brief Method Write addr 0x27f5fd8 size 0x24 virtual false final false
inline ::OVR::OpenVR::EIOBufferError Write(uint64_t  ulBuffer, ::cordl_internals::intptr_t  pSrc, uint32_t  unBytes) ;

/// @brief Method PropertyContainer addr 0x27f5ffc size 0x24 virtual false final false
inline uint64_t PropertyContainer(uint64_t  ulBuffer) ;

// Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRIOBuffer(CVRIOBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRIOBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRIOBuffer(CVRIOBuffer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CVRIOBuffer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRIOBuffer, 0x38>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRIOBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRIOBuffer*, "OVR.OpenVR", "CVRIOBuffer");
