#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRResources)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
namespace OVR::OpenVR {
class __IVRResources___GetResourceFullPath;
}
namespace OVR::OpenVR {
class __IVRResources___LoadSharedResource;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRResources___GetResourceFullPath;
}
namespace OVR::OpenVR {
class __IVRResources___LoadSharedResource;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRResources___GetResourceFullPath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRResources___LoadSharedResource);
MARK_VAL_T(::OVR::OpenVR::IVRResources);
// Type: ::_LoadSharedResource
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8515))
// CS Name: ::IVRResources::_LoadSharedResource*
class CORDL_TYPE __IVRResources___LoadSharedResource : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRResources___LoadSharedResource* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ecef0 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ecfc8 size 0x14 virtual true final false
inline uint32_t Invoke(::StringW  pchResourceName, ::StringW  pchBuffer, uint32_t  unBufferLen) ;

/// @brief Method BeginInvoke addr 0x27ecfdc size 0x98 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchResourceName, ::StringW  pchBuffer, uint32_t  unBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ed074 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRResources___LoadSharedResource", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRResources___LoadSharedResource(__IVRResources___LoadSharedResource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRResources___LoadSharedResource", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRResources___LoadSharedResource(__IVRResources___LoadSharedResource const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRResources___LoadSharedResource()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRResources___LoadSharedResource, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: ::_GetResourceFullPath
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8516))
// CS Name: ::IVRResources::_GetResourceFullPath*
class CORDL_TYPE __IVRResources___GetResourceFullPath : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::OVR::OpenVR::__IVRResources___GetResourceFullPath* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x27ed09c size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x27ed174 size 0x14 virtual true final false
inline uint32_t Invoke(::StringW  pchResourceName, ::StringW  pchResourceTypeDirectory, ::System::Text::StringBuilder*  pchPathBuffer, uint32_t  unBufferLen) ;

/// @brief Method BeginInvoke addr 0x27ed188 size 0xa8 virtual true final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  pchResourceName, ::StringW  pchResourceTypeDirectory, ::System::Text::StringBuilder*  pchPathBuffer, uint32_t  unBufferLen, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke addr 0x27ed230 size 0x28 virtual true final false
inline uint32_t EndInvoke(::System::IAsyncResult*  result) ;

// Ctor Parameters [CppParam { name: "", ty: "__IVRResources___GetResourceFullPath", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IVRResources___GetResourceFullPath(__IVRResources___GetResourceFullPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IVRResources___GetResourceFullPath", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IVRResources___GetResourceFullPath(__IVRResources___GetResourceFullPath const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __IVRResources___GetResourceFullPath()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRResources___GetResourceFullPath, 0x80>, "Size mismatch!");

} // namespace end def OVR::OpenVR
// Type: OVR.OpenVR::IVRResources
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8517))
// CS Name: ::OVR.OpenVR::IVRResources
struct CORDL_TYPE IVRResources : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
using _GetResourceFullPath = ::OVR::OpenVR::__IVRResources___GetResourceFullPath;

using _LoadSharedResource = ::OVR::OpenVR::__IVRResources___LoadSharedResource;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field LoadSharedResource offset 0x0
 __declspec(property(get=__get_LoadSharedResource, put=__set_LoadSharedResource)) ::OVR::OpenVR::__IVRResources___LoadSharedResource*  LoadSharedResource;

/// @brief Field GetResourceFullPath offset 0x8
 __declspec(property(get=__get_GetResourceFullPath, put=__set_GetResourceFullPath)) ::OVR::OpenVR::__IVRResources___GetResourceFullPath*  GetResourceFullPath;

constexpr void __set_LoadSharedResource(::OVR::OpenVR::__IVRResources___LoadSharedResource*  value) ;

constexpr ::OVR::OpenVR::__IVRResources___LoadSharedResource* __get_LoadSharedResource() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRResources___LoadSharedResource*> __get_LoadSharedResource() const;

constexpr void __set_GetResourceFullPath(::OVR::OpenVR::__IVRResources___GetResourceFullPath*  value) ;

constexpr ::OVR::OpenVR::__IVRResources___GetResourceFullPath* __get_GetResourceFullPath() ;

constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRResources___GetResourceFullPath*> __get_GetResourceFullPath() const;

// Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "::OVR::OpenVR::__IVRResources___LoadSharedResource*", modifiers: "", def_value: None }, CppParam { name: "GetResourceFullPath", ty: "::OVR::OpenVR::__IVRResources___GetResourceFullPath*", modifiers: "", def_value: None }]
constexpr IVRResources(::OVR::OpenVR::__IVRResources___LoadSharedResource*  LoadSharedResource, ::OVR::OpenVR::__IVRResources___GetResourceFullPath*  GetResourceFullPath) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit IVRResources(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 IVRResources()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRResources, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRResources___GetResourceFullPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRResources___GetResourceFullPath*, "OVR.OpenVR", "IVRResources/_GetResourceFullPath");
NEED_NO_BOX(::OVR::OpenVR::__IVRResources___LoadSharedResource);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRResources___LoadSharedResource*, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRResources, "OVR.OpenVR", "IVRResources");
