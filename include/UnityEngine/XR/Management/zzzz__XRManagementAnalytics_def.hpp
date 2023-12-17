#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagementAnalytics)
namespace UnityEngine::XR::Management {
struct __XRManagementAnalytics__BuildEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagementAnalytics;
}
namespace UnityEngine::XR::Management {
struct __XRManagementAnalytics__BuildEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagementAnalytics);
MARK_VAL_T(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent);
// Type: ::BuildEvent
namespace UnityEngine::XR::Management {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16037))
// CS Name: ::XRManagementAnalytics::BuildEvent
struct CORDL_TYPE __XRManagementAnalytics__BuildEvent : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field buildGuid offset 0x0
 __declspec(property(get=__get_buildGuid, put=__set_buildGuid)) ::StringW  buildGuid;

/// @brief Field buildTarget offset 0x8
 __declspec(property(get=__get_buildTarget, put=__set_buildTarget)) ::StringW  buildTarget;

/// @brief Field buildTargetGroup offset 0x10
 __declspec(property(get=__get_buildTargetGroup, put=__set_buildTargetGroup)) ::StringW  buildTargetGroup;

/// @brief Field assigned_loaders offset 0x18
 __declspec(property(get=__get_assigned_loaders, put=__set_assigned_loaders)) ::ArrayW<::StringW,::Array<::StringW>*>  assigned_loaders;

constexpr void __set_buildGuid(::StringW  value) ;

constexpr ::StringW& __get_buildGuid() ;

constexpr ::StringW const& __get_buildGuid() const;

constexpr void __set_buildTarget(::StringW  value) ;

constexpr ::StringW& __get_buildTarget() ;

constexpr ::StringW const& __get_buildTarget() const;

constexpr void __set_buildTargetGroup(::StringW  value) ;

constexpr ::StringW& __get_buildTargetGroup() ;

constexpr ::StringW const& __get_buildTargetGroup() const;

constexpr void __set_assigned_loaders(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_assigned_loaders() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_assigned_loaders() const;

// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __XRManagementAnalytics__BuildEvent(::StringW  buildGuid, ::StringW  buildTarget, ::StringW  buildTargetGroup, ::ArrayW<::StringW,::Array<::StringW>*>  assigned_loaders) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __XRManagementAnalytics__BuildEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __XRManagementAnalytics__BuildEvent()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
// Type: UnityEngine.XR.Management::XRManagementAnalytics
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16038))
// CS Name: ::UnityEngine.XR.Management::XRManagementAnalytics*
class CORDL_TYPE XRManagementAnalytics : public ::System::Object {
public:
// Declarations
using BuildEvent = ::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kMaxEventsPerHour offset 0x0
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x3e8)};

/// @brief Field kMaxNumberOfElements offset 0x0
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x3e8)};

/// @brief Field kVendorKey offset 0x0
static constexpr ::ConstString  kVendorKey{u"unity.xrmanagement"};

/// @brief Field kEventBuild offset 0x0
static constexpr ::ConstString  kEventBuild{u"xrmanagment_build"};

/// @brief Method Initialize addr 0x2c765e8 size 0x8 virtual false final false
static inline bool Initialize() ;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRManagementAnalytics(XRManagementAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRManagementAnalytics(XRManagementAnalytics const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XRManagementAnalytics()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagementAnalytics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagementAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagementAnalytics*, "UnityEngine.XR.Management", "XRManagementAnalytics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, "UnityEngine.XR.Management", "XRManagementAnalytics/BuildEvent");
