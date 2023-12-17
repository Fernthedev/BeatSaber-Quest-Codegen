#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AssetFileDeleteResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetFileDeleteResult)
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDeleteResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDeleteResult);
// Type: Oculus.Platform::MessageWithAssetFileDeleteResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4578 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13419))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13277))
// CS Name: ::Oculus.Platform::MessageWithAssetFileDeleteResult*
class CORDL_TYPE MessageWithAssetFileDeleteResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDeleteResult*>)]{};

static inline ::Oculus::Platform::MessageWithAssetFileDeleteResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eec10 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetAssetFileDeleteResult addr 0x26f1020 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetAssetFileDeleteResult() ;

/// @brief Method GetDataFromMessage addr 0x26f105c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::AssetFileDeleteResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDeleteResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAssetFileDeleteResult(MessageWithAssetFileDeleteResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithAssetFileDeleteResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDeleteResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDeleteResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDeleteResult*, "Oculus.Platform", "MessageWithAssetFileDeleteResult");
