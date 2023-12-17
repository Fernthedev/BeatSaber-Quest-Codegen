#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DiagnosticInfo)
namespace UnityEngine::ResourceManagement {
struct __ResourceManager__DiagnosticEventType;
}
namespace UnityEngine::ResourceManagement::Diagnostics {
struct DiagnosticEvent;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
class DiagnosticInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo);
// Type: UnityEngine.AddressableAssets.Utility::DiagnosticInfo
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14100))
// CS Name: ::UnityEngine.AddressableAssets.Utility::DiagnosticInfo*
class CORDL_TYPE DiagnosticInfo : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field DisplayName offset 0x10
 __declspec(property(get=__get_DisplayName, put=__set_DisplayName)) ::StringW  DisplayName;

/// @brief Field ObjectId offset 0x18
 __declspec(property(get=__get_ObjectId, put=__set_ObjectId)) int32_t  ObjectId;

/// @brief Field Dependencies offset 0x20
 __declspec(property(get=__get_Dependencies, put=__set_Dependencies)) ::ArrayW<int32_t,::Array<int32_t>*>  Dependencies;

constexpr void __set_DisplayName(::StringW  value) ;

constexpr ::StringW& __get_DisplayName() ;

constexpr ::StringW const& __get_DisplayName() const;

constexpr void __set_ObjectId(int32_t  value) ;

constexpr int32_t& __get_ObjectId() ;

constexpr int32_t const& __get_ObjectId() const;

constexpr void __set_Dependencies(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_Dependencies() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_Dependencies() const;

/// @brief Method CreateEvent addr 0x2a28770 size 0x44 virtual false final false
inline ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent CreateEvent(::StringW  category, ::UnityEngine::ResourceManagement::__ResourceManager__DiagnosticEventType  eventType, int32_t  frame, int32_t  val) ;

static inline ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo* New_ctor() ;

/// @brief Method .ctor addr 0x2a287b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DiagnosticInfo(DiagnosticInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DiagnosticInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DiagnosticInfo(DiagnosticInfo const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DiagnosticInfo()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets::Utility
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::DiagnosticInfo*, "UnityEngine.AddressableAssets.Utility", "DiagnosticInfo");
