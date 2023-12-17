#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateHandler)
// Forward declare root types
namespace UnityEngine::Networking {
class CertificateHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::CertificateHandler);
// Type: UnityEngine.Networking::CertificateHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15583))
// CS Name: ::UnityEngine.Networking::CertificateHandler*
class CORDL_TYPE CertificateHandler : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_Ptr offset 0x10
 __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr)) ::cordl_internals::intptr_t  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_Ptr() ;

constexpr ::cordl_internals::intptr_t const& __get_m_Ptr() const;

/// @brief Method Release addr 0x2eafcf8 size 0x3c virtual false final false
inline void Release() ;

/// @brief Method ValidateCertificate addr 0x2eafd34 size 0x8 virtual true final false
inline bool ValidateCertificate(::ArrayW<uint8_t,::Array<uint8_t>*>  certificateData) ;

/// @brief Method ValidateCertificateNative addr 0x2eafd3c size 0x100c virtual false final false
inline bool ValidateCertificateNative(::ArrayW<uint8_t,::Array<uint8_t>*>  certificateData) ;

/// @brief Method Dispose addr 0x2eae254 size 0x94 virtual true final true
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertificateHandler(CertificateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertificateHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertificateHandler(CertificateHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertificateHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::CertificateHandler, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::CertificateHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::CertificateHandler*, "UnityEngine.Networking", "CertificateHandler");
