#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_Session)
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Session;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Session);
// Type: HoudiniEngineUnity::HAPI_Session
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9728))
// CS Name: ::HoudiniEngineUnity::HAPI_Session
struct CORDL_TYPE HAPI_Session : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field type offset 0x0
 __declspec(property(get=__get_type, put=__set_type)) ::HoudiniEngineUnity::HAPI_SessionType  type;

/// @brief Field id offset 0x8
 __declspec(property(get=__get_id, put=__set_id)) int64_t  id;

constexpr void __set_type(::HoudiniEngineUnity::HAPI_SessionType  value) ;

constexpr ::HoudiniEngineUnity::HAPI_SessionType& __get_type() ;

constexpr ::HoudiniEngineUnity::HAPI_SessionType const& __get_type() const;

constexpr void __set_id(int64_t  value) ;

constexpr int64_t& __get_id() ;

constexpr int64_t const& __get_id() const;

// Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_SessionType", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: None }]
constexpr HAPI_Session(::HoudiniEngineUnity::HAPI_SessionType  type, int64_t  id) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_Session(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_Session()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Session, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Session, "HoudiniEngineUnity", "HAPI_Session");
