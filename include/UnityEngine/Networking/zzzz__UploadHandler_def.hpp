#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UploadHandler)
// Forward declare root types
namespace UnityEngine::Networking {
class UploadHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Networking::UploadHandler);
// Type: UnityEngine.Networking::UploadHandler
namespace UnityEngine::Networking {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15582))
// CS Name: ::UnityEngine.Networking::UploadHandler*
class CORDL_TYPE UploadHandler : public ::System::Object {
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

/// @brief Method Release addr 0x2eafc28 size 0x3c virtual false final false
inline void Release() ;

/// @brief Method Dispose addr 0x2eafc64 size 0x94 virtual true final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UploadHandler(UploadHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UploadHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UploadHandler(UploadHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UploadHandler()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Networking::UploadHandler, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Networking
NEED_NO_BOX(::UnityEngine::Networking::UploadHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::UploadHandler*, "UnityEngine.Networking", "UploadHandler");
