#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LivestreamingStatus)
// Forward declare root types
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LivestreamingStatus);
// Type: Oculus.Platform.Models::LivestreamingStatus
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13455))
// CS Name: ::Oculus.Platform.Models::LivestreamingStatus*
class CORDL_TYPE LivestreamingStatus : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field CommentsVisible offset 0x10
 __declspec(property(get=__get_CommentsVisible, put=__set_CommentsVisible)) bool  CommentsVisible;

/// @brief Field IsPaused offset 0x11
 __declspec(property(get=__get_IsPaused, put=__set_IsPaused)) bool  IsPaused;

/// @brief Field LivestreamingEnabled offset 0x12
 __declspec(property(get=__get_LivestreamingEnabled, put=__set_LivestreamingEnabled)) bool  LivestreamingEnabled;

/// @brief Field LivestreamingType offset 0x14
 __declspec(property(get=__get_LivestreamingType, put=__set_LivestreamingType)) int32_t  LivestreamingType;

/// @brief Field MicEnabled offset 0x18
 __declspec(property(get=__get_MicEnabled, put=__set_MicEnabled)) bool  MicEnabled;

constexpr void __set_CommentsVisible(bool  value) ;

constexpr bool& __get_CommentsVisible() ;

constexpr bool const& __get_CommentsVisible() const;

constexpr void __set_IsPaused(bool  value) ;

constexpr bool& __get_IsPaused() ;

constexpr bool const& __get_IsPaused() const;

constexpr void __set_LivestreamingEnabled(bool  value) ;

constexpr bool& __get_LivestreamingEnabled() ;

constexpr bool const& __get_LivestreamingEnabled() const;

constexpr void __set_LivestreamingType(int32_t  value) ;

constexpr int32_t& __get_LivestreamingType() ;

constexpr int32_t const& __get_LivestreamingType() const;

constexpr void __set_MicEnabled(bool  value) ;

constexpr bool& __get_MicEnabled() ;

constexpr bool const& __get_MicEnabled() const;

static inline ::Oculus::Platform::Models::LivestreamingStatus* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2707304 size 0xc8 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LivestreamingStatus(LivestreamingStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LivestreamingStatus", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LivestreamingStatus(LivestreamingStatus const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LivestreamingStatus()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LivestreamingStatus, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LivestreamingStatus);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LivestreamingStatus*, "Oculus.Platform.Models", "LivestreamingStatus");
