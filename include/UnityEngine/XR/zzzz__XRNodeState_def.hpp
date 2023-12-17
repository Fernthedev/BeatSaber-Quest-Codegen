#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRNodeState)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct AvailableTrackingData;
}
namespace UnityEngine::XR {
struct XRNode;
}
// Forward declare root types
namespace UnityEngine::XR {
struct XRNodeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::XRNodeState);
// Type: UnityEngine.XR::XRNodeState
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15629))
// CS Name: ::UnityEngine.XR::XRNodeState
struct CORDL_TYPE XRNodeState : public ::bs_hook::ValueTypeWrapper<0x60> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field m_Type offset 0x0
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::XR::XRNode  m_Type;

/// @brief Field m_AvailableFields offset 0x4
 __declspec(property(get=__get_m_AvailableFields, put=__set_m_AvailableFields)) ::UnityEngine::XR::AvailableTrackingData  m_AvailableFields;

/// @brief Field m_Position offset 0x8
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Rotation offset 0x14
 __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation)) ::UnityEngine::Quaternion  m_Rotation;

/// @brief Field m_Velocity offset 0x24
 __declspec(property(get=__get_m_Velocity, put=__set_m_Velocity)) ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_AngularVelocity offset 0x30
 __declspec(property(get=__get_m_AngularVelocity, put=__set_m_AngularVelocity)) ::UnityEngine::Vector3  m_AngularVelocity;

/// @brief Field m_Acceleration offset 0x3c
 __declspec(property(get=__get_m_Acceleration, put=__set_m_Acceleration)) ::UnityEngine::Vector3  m_Acceleration;

/// @brief Field m_AngularAcceleration offset 0x48
 __declspec(property(get=__get_m_AngularAcceleration, put=__set_m_AngularAcceleration)) ::UnityEngine::Vector3  m_AngularAcceleration;

/// @brief Field m_Tracked offset 0x54
 __declspec(property(get=__get_m_Tracked, put=__set_m_Tracked)) int32_t  m_Tracked;

/// @brief Field m_UniqueID offset 0x58
 __declspec(property(get=__get_m_UniqueID, put=__set_m_UniqueID)) uint64_t  m_UniqueID;

 __declspec(property(put=set_uniqueID)) uint64_t  uniqueID;

 __declspec(property(get=get_nodeType, put=set_nodeType)) ::UnityEngine::XR::XRNode  nodeType;

 __declspec(property(put=set_tracked)) bool  tracked;

constexpr void __set_m_Type(::UnityEngine::XR::XRNode  value) ;

constexpr ::UnityEngine::XR::XRNode& __get_m_Type() ;

constexpr ::UnityEngine::XR::XRNode const& __get_m_Type() const;

constexpr void __set_m_AvailableFields(::UnityEngine::XR::AvailableTrackingData  value) ;

constexpr ::UnityEngine::XR::AvailableTrackingData& __get_m_AvailableFields() ;

constexpr ::UnityEngine::XR::AvailableTrackingData const& __get_m_AvailableFields() const;

constexpr void __set_m_Position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Position() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Position() const;

constexpr void __set_m_Rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_m_Rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_m_Rotation() const;

constexpr void __set_m_Velocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Velocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Velocity() const;

constexpr void __set_m_AngularVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_AngularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_m_AngularVelocity() const;

constexpr void __set_m_Acceleration(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_Acceleration() ;

constexpr ::UnityEngine::Vector3 const& __get_m_Acceleration() const;

constexpr void __set_m_AngularAcceleration(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_m_AngularAcceleration() ;

constexpr ::UnityEngine::Vector3 const& __get_m_AngularAcceleration() const;

constexpr void __set_m_Tracked(int32_t  value) ;

constexpr int32_t& __get_m_Tracked() ;

constexpr int32_t const& __get_m_Tracked() const;

constexpr void __set_m_UniqueID(uint64_t  value) ;

constexpr uint64_t& __get_m_UniqueID() ;

constexpr uint64_t const& __get_m_UniqueID() const;

/// @brief Method set_uniqueID addr 0x2eb2fc0 size 0x8 virtual false final false
inline void set_uniqueID(uint64_t  value) ;

/// @brief Method get_nodeType addr 0x2eb2fdc size 0x8 virtual false final false
inline ::UnityEngine::XR::XRNode get_nodeType() ;

/// @brief Method set_nodeType addr 0x2eb2fc8 size 0x8 virtual false final false
inline void set_nodeType(::UnityEngine::XR::XRNode  value) ;

/// @brief Method set_tracked addr 0x2eb2fd0 size 0xc virtual false final false
inline void set_tracked(bool  value) ;

/// @brief Method TryGetPosition addr 0x2eb2fe4 size 0x14 virtual false final false
inline bool TryGetPosition(ByRef<::UnityEngine::Vector3>  position) ;

/// @brief Method TryGetRotation addr 0x2eb3074 size 0x14 virtual false final false
inline bool TryGetRotation(ByRef<::UnityEngine::Quaternion>  rotation) ;

/// @brief Method TryGetVelocity addr 0x2eb30fc size 0x14 virtual false final false
inline bool TryGetVelocity(ByRef<::UnityEngine::Vector3>  velocity) ;

/// @brief Method TryGetAngularVelocity addr 0x2eb3110 size 0x14 virtual false final false
inline bool TryGetAngularVelocity(ByRef<::UnityEngine::Vector3>  angularVelocity) ;

/// @brief Method TryGetAcceleration addr 0x2eb3124 size 0x14 virtual false final false
inline bool TryGetAcceleration(ByRef<::UnityEngine::Vector3>  acceleration) ;

/// @brief Method TryGetAngularAcceleration addr 0x2eb3138 size 0x14 virtual false final false
inline bool TryGetAngularAcceleration(ByRef<::UnityEngine::Vector3>  angularAcceleration) ;

/// @brief Method TryGet addr 0x2eb2ff8 size 0x7c virtual false final false
inline bool TryGet(::UnityEngine::Vector3  inValue, ::UnityEngine::XR::AvailableTrackingData  availabilityFlag, ByRef<::UnityEngine::Vector3>  outValue) ;

/// @brief Method TryGet addr 0x2eb3088 size 0x74 virtual false final false
inline bool TryGet(::UnityEngine::Quaternion  inValue, ::UnityEngine::XR::AvailableTrackingData  availabilityFlag, ByRef<::UnityEngine::Quaternion>  outValue) ;

// Ctor Parameters [CppParam { name: "m_Type", ty: "::UnityEngine::XR::XRNode", modifiers: "", def_value: None }, CppParam { name: "m_AvailableFields", ty: "::UnityEngine::XR::AvailableTrackingData", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_AngularAcceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "m_Tracked", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UniqueID", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr XRNodeState(::UnityEngine::XR::XRNode  m_Type, ::UnityEngine::XR::AvailableTrackingData  m_AvailableFields, ::UnityEngine::Vector3  m_Position, ::UnityEngine::Quaternion  m_Rotation, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_Acceleration, ::UnityEngine::Vector3  m_AngularAcceleration, int32_t  m_Tracked, uint64_t  m_UniqueID) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XRNodeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x60>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XRNodeState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::XRNodeState, 0x60>, "Size mismatch!");

} // namespace end def UnityEngine::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRNodeState, "UnityEngine.XR", "XRNodeState");
