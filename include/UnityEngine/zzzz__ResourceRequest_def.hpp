#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ResourceRequest)
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class ResourceRequest;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceRequest);
// Type: UnityEngine::ResourceRequest
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10262))
// CS Name: ::UnityEngine::ResourceRequest*
class CORDL_TYPE ResourceRequest : public ::UnityEngine::AsyncOperation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::AsyncOperation)]{};

/// @brief Field m_Path offset 0x20
 __declspec(property(get=__get_m_Path, put=__set_m_Path)) ::StringW  m_Path;

/// @brief Field m_Type offset 0x28
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::System::Type*  m_Type;

 __declspec(property(get=get_asset)) ::UnityEngine::Object*  asset;

constexpr void __set_m_Path(::StringW  value) ;

constexpr ::StringW& __get_m_Path() ;

constexpr ::StringW const& __get_m_Path() const;

constexpr void __set_m_Type(::System::Type*  value) ;

constexpr ::System::Type* __get_m_Type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_m_Type() const;

/// @brief Method GetResult addr 0x2cddfec size 0xc virtual true final false
inline ::UnityEngine::Object* GetResult() ;

/// @brief Method get_asset addr 0x2cde070 size 0xc virtual false final false
inline ::UnityEngine::Object* get_asset() ;

static inline ::UnityEngine::ResourceRequest* New_ctor() ;

/// @brief Method .ctor addr 0x2cde07c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceRequest(ResourceRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceRequest(ResourceRequest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ResourceRequest()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceRequest, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::ResourceRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceRequest*, "UnityEngine", "ResourceRequest");
