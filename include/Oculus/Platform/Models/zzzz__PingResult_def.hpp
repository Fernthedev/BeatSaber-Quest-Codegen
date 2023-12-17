#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PingResult)
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class PingResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::PingResult);
// Type: Oculus.Platform.Models::PingResult
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13471))
// CS Name: ::Oculus.Platform.Models::PingResult*
class CORDL_TYPE PingResult : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <ID>k__BackingField offset 0x10
 __declspec(property(get=__get__ID_k__BackingField, put=__set__ID_k__BackingField)) uint64_t  _ID_k__BackingField;

/// @brief Field pingTimeUsec offset 0x18
 __declspec(property(get=__get_pingTimeUsec, put=__set_pingTimeUsec)) ::System::Nullable_1<uint64_t>  pingTimeUsec;

 __declspec(property(get=get_ID, put=set_ID)) uint64_t  _cordl_ID;

 __declspec(property(get=get_PingTimeUsec)) uint64_t  PingTimeUsec;

 __declspec(property(get=get_IsTimeout)) bool  IsTimeout;

constexpr void __set__ID_k__BackingField(uint64_t  value) ;

constexpr uint64_t& __get__ID_k__BackingField() ;

constexpr uint64_t const& __get__ID_k__BackingField() const;

constexpr void __set_pingTimeUsec(::System::Nullable_1<uint64_t>  value) ;

constexpr ::System::Nullable_1<uint64_t>& __get_pingTimeUsec() ;

constexpr ::System::Nullable_1<uint64_t> const& __get_pingTimeUsec() const;

static inline ::Oculus::Platform::Models::PingResult* New_ctor(uint64_t  id, ::System::Nullable_1<uint64_t>  pingTimeUsec) ;

/// @brief Method .ctor addr 0x2708334 size 0x3c virtual false final false
inline void _ctor(uint64_t  id, ::System::Nullable_1<uint64_t>  pingTimeUsec) ;

/// @brief Method get_ID addr 0x2708370 size 0x8 virtual false final false
inline uint64_t get_ID() ;

/// @brief Method set_ID addr 0x2708378 size 0x8 virtual false final false
inline void set_ID(uint64_t  value) ;

/// @brief Method get_PingTimeUsec addr 0x2708380 size 0x6c virtual false final false
inline uint64_t get_PingTimeUsec() ;

/// @brief Method get_IsTimeout addr 0x27083ec size 0x44 virtual false final false
inline bool get_IsTimeout() ;

// Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PingResult(PingResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PingResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PingResult(PingResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PingResult()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::PingResult, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::PingResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::PingResult*, "Oculus.Platform.Models", "PingResult");
