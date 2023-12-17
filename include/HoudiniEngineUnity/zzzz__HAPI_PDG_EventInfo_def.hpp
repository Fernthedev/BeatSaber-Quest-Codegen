#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_EventInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_EventInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_EventInfo);
// Type: HoudiniEngineUnity::HAPI_PDG_EventInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9752))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_EventInfo
struct CORDL_TYPE HAPI_PDG_EventInfo : public ::bs_hook::ValueTypeWrapper<0x1c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field nodeId offset 0x0
 __declspec(property(get=__get_nodeId, put=__set_nodeId)) int32_t  nodeId;

/// @brief Field workitemId offset 0x4
 __declspec(property(get=__get_workitemId, put=__set_workitemId)) int32_t  workitemId;

/// @brief Field dependencyId offset 0x8
 __declspec(property(get=__get_dependencyId, put=__set_dependencyId)) int32_t  dependencyId;

/// @brief Field currentState offset 0xc
 __declspec(property(get=__get_currentState, put=__set_currentState)) int32_t  currentState;

/// @brief Field lastState offset 0x10
 __declspec(property(get=__get_lastState, put=__set_lastState)) int32_t  lastState;

/// @brief Field eventType offset 0x14
 __declspec(property(get=__get_eventType, put=__set_eventType)) int32_t  eventType;

/// @brief Field msgSH offset 0x18
 __declspec(property(get=__get_msgSH, put=__set_msgSH)) int32_t  msgSH;

constexpr void __set_nodeId(int32_t  value) ;

constexpr int32_t& __get_nodeId() ;

constexpr int32_t const& __get_nodeId() const;

constexpr void __set_workitemId(int32_t  value) ;

constexpr int32_t& __get_workitemId() ;

constexpr int32_t const& __get_workitemId() const;

constexpr void __set_dependencyId(int32_t  value) ;

constexpr int32_t& __get_dependencyId() ;

constexpr int32_t const& __get_dependencyId() const;

constexpr void __set_currentState(int32_t  value) ;

constexpr int32_t& __get_currentState() ;

constexpr int32_t const& __get_currentState() const;

constexpr void __set_lastState(int32_t  value) ;

constexpr int32_t& __get_lastState() ;

constexpr int32_t const& __get_lastState() const;

constexpr void __set_eventType(int32_t  value) ;

constexpr int32_t& __get_eventType() ;

constexpr int32_t const& __get_eventType() const;

constexpr void __set_msgSH(int32_t  value) ;

constexpr int32_t& __get_msgSH() ;

constexpr int32_t const& __get_msgSH() const;

// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "workitemId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dependencyId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "currentState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eventType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "msgSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_EventInfo(int32_t  nodeId, int32_t  workitemId, int32_t  dependencyId, int32_t  currentState, int32_t  lastState, int32_t  eventType, int32_t  msgSH) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_PDG_EventInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_PDG_EventInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_EventInfo, 0x1c>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_EventInfo, "HoudiniEngineUnity", "HAPI_PDG_EventInfo");
